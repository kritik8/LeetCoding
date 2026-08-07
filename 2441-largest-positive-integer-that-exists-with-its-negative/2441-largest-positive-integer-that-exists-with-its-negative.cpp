class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> vec(2001, 0);
        int result = -1;
        for(int &num: nums){
            if(vec[-num + 1000] == 1){
                result = max(result, abs(num));
            }
            vec[num+1000] = 1;
        }
        return result;
    }
};