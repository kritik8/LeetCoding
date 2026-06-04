class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int close = 1000000;
        sort(nums.begin(), nums.end());

        for(int k=0; k<n; k++){
            int i= k+1;
            int j = n-1;


            while(i<j){
                int sum = nums[k]+nums[i]+nums[j];

                if(abs(target-sum) < abs(target- close))
                    close = sum;
                
                if(sum < target)
                    i++;
                else
                    j--;
            }
        }
        return close;
    }
};