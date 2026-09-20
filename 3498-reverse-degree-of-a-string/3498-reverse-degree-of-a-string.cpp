class Solution {
public:
    int reverseDegree(string s) {
        int res = 0;
        for(int i=0; i<s.length(); i++){
            int x = s[i] - 'a';
            res += (i+1) * (26 - x);
        }
        return res;
    }
};