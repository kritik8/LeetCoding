class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int cf = 0;
        int sum=0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        for(int i=0; i<n; i++){
            int ls = cf;
            int rs = sum - cf - nums[i];

            if(ls==rs)
                return i;
            
            cf += nums[i];
        }
        return -1;
    }
};