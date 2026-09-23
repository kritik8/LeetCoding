class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        for(int &x: nums) sum += x;
        int target = sum-x;
        int left =0, add  =0 , longest =-1;
        for(int right =0; right < n; right++){
            add += nums[right];
            while(left <= right && add > target){
                add -= nums[left++];
            }
            if(add==target)
                longest = max(longest, right-left+1);
        }
        return longest == -1 ? -1 : n-longest;
    }
};