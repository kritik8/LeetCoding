class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        if(ranges::count(s, '1') < k)
            return "";
        
        string ans = s;
        int ones=0;
        for(int i=0, j=0; j < s.length(); j++){
            ones += s[j]-'0';
            while(ones > k || s[i]=='0'){
                ones -= s[i]-'0';
                i++;
            }
            if(ones==k){
                string t = s.substr(i, j-i+1);
                if(t.length() < ans.length() || t.length()== ans.length() && t < ans){
                    ans = move(t);
                }
            }
        }
        return ans;
    }
};