class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> vec(26, 0);
        for(char &ch: chars){
            vec[ch-'a']++;
        }
        int result=0;
        for(string &wordd: words){
            vector<int> count(26,0);
            for(char &ch: wordd){
                count[ch-'a']++;
            }
            bool ok = true;
            for(int i=0; i<26; i++){
                if(count[i] > vec[i]){
                    ok=false;
                    break;
                }
            }
            if(ok==true)
                result += wordd.length();
        }
        return result;
    }
};