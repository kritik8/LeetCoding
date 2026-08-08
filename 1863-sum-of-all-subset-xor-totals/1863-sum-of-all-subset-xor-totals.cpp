class Solution {
public:
int  solve(vector<int>& nums, int i, int x){
    if(i == nums.size()){
        return x;
    }
    int include = solve(nums, i+1, x^nums[i]);
    int exclude = solve(nums, i+1, x);

    return include + exclude;
}
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
          }
};