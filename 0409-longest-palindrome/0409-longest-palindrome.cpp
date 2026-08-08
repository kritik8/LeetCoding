class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
       
        int result =0;
        int odd = 0;

        for(char &ch: s){
            mp[ch]++;
            if(mp[ch]%2 != 0){
                odd++;
            }else{
                odd--;
            }
        }
        if(odd > 0)
            return n - odd + 1;
        
        return n;
    }
};