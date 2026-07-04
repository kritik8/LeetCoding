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
        auto lambda = [&](int freq){
            return  freq%n==0;
        };
        return all_of(vec.begin(), vec.end(), lambda);
        return true;
    }
};