class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int res = k;
        while(st.find(res) != st.end())
            res += k;
        
        return res;
    }
};