class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int x = *max_element(nums.begin(), nums.end());
        int sum =0;
        for(int &num: nums){
            sum += num;
        }
        sum = sum - x;
        return (x*(n-1)) - sum;
    }
};