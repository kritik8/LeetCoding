class Solution {
public:
string generate(string &word){
    vector<int> vec(26, 0);
    for(char &ch: word){
        vec[ch-'a']++;
    }
    string newword = "";
    for(int i=0 ; i<26; i++){
        if(vec[i] > 0){
            newword += string(vec[i], i + 'a');
        }
    }
    return newword;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;

        vector<vector<string>> result;

        for(int i=0; i<n; i++){
            string word = strs[i];
            string newword = generate(word);
            mp[newword].push_back(word);
        }
        for(auto &it: mp){
            result.push_back(it.second);
        }
        return result;
    }
};
