class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        for(char &ch: s){
            sum += ch;
        }
        int sumi=0;
        for(char &ch: t){
            sumi += ch;
        }
        return char(sumi-sum);
    }
};