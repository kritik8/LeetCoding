class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string pre = strs[0];
        int prelen = pre.length();
        for(int i=0; i< strs.size(); i++){
            string s = strs[i];
            while(prelen > s.length() || pre != s.substr(0, prelen)){
                prelen--;
                if(prelen==0)
                    return "";
                
                pre = pre.substr(0, prelen);
            }
        }
        return pre;
    }
};