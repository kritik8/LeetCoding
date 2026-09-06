class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());
        int odd =0;
        for(int &x: nums1){
            if(x%2 == 1)
                odd++;
        }
        if(odd == 0 || odd == n)
            return true;
        
        else if(nums1[0]%2 == 0)
            return false;
    
    return true;
    }
};