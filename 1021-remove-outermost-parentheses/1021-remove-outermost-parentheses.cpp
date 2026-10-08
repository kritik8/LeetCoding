class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int lvl =0;
        for(char &ch: s){
            if((ch == '(' && lvl++) || (ch== ')' && --lvl)){
                res += ch;
            }
        }
        return res;
    }
};