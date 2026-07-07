class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum  = n*(n+1)/ 2;
        long long sum1  = 0;
        for(int &num: nums)
            sum1 += num;

        return sum - sum1; 
    }
};