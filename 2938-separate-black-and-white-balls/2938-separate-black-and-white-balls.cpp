class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        long long swaps =0;
        int black =0;
        for(int i=0; i<n; i++){
            if(s[i]== '1'){
                black++;
            }else{
                swaps += black;
            }
        }
        return swaps;
    }
};