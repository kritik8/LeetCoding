class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){
            string s1;
            int n = s.length();

            for(int i=0; i<n; i+=k){
                int val =0;
                for(int j=i; j< min(i+k, n); j++){
                    val += s[j] - '0';
                }
            s1.append(to_string(val));
            }
                s=s1;
            }
return s;
        
    }
};