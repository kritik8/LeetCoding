class Solution {
public:
void solve(vector<int>& nums, int i,vector<int>& currsub, vector<vector<int>>& subsets){
    if(i == nums.size()){
        subsets.push_back(currsub);
        return;
    }
    currsub.push_back(nums[i]);
    solve(nums, i+1, currsub, subsets);
    currsub.pop_back();
    solve(nums, i+1, currsub, subsets);
}
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> currsub;
        solve(nums, 0, currsub, subsets);

        int result =0;
        for(vector<int>& sub: subsets){
            int x =0;
            for(int &num: sub){
                x ^= num;
            }
            result += x;
        }
        return result;
    }
};