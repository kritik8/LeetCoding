class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        vector<int> vec(26,0);
        int i=0, ans=0;
        for(int j=0; j<n; j++){
            int ch = s[j]-'a';
            vec[ch]++;

            while(vec[ch] > 2){
                int ch2 = s[i]-'a';
                vec[ch2]--;
                i++;
            }
            ans = max(ans, j - i+1);
        }
        return ans;
    }
};