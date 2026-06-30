class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int result = INT_MIN;

        int totalone = count(s.begin(), s.end(), '1');
        int zero =0;
        int one =0;

        for(int i=0; i<n-1; i++){
            if(s[i]=='1')
                one++;
            else
                zero++;
            result = max(result, zero - one + totalone);
        }
        return result;
    }
};