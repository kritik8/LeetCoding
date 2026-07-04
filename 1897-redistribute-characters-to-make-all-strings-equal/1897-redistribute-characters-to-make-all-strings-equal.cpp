class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector<int> vec(26, 0);
        for(string &word: words){
            for(char &ch: word){
                vec[ch-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            if(vec[i]%n != 0)
                return false;
        }
        return true;
    }
};