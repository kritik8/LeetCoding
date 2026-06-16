class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result=0;
        int n = nums.size();
        int i=0;
        while(i < n){
            if(nums[i] == 0){
                long long l = 1;
                while(i<n && nums[i]==0){
                    i++;
                    result += l;
                    l++;
                }
            }
            else{
                i++;
            }
        }
        return result;
    }
};