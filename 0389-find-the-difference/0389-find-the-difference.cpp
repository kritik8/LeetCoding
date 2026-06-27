class Solution {
public:
    char findTheDifference(string s, string t) {
        int xorr =0 ;
        for(char &ch: s){
            xorr ^= ch;
        }
        for(char &ch: t){
            xorr ^= ch;
        }
        return (char)(xorr);    }
};