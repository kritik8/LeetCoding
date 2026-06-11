class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long sum =0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int result = INT_MAX;
        int index;
        long long ls=0;
        long long rs=0;
        for(int i=0 ; i<n; i++){
            ls += nums[i];
            rs = sum - ls;

            long long la = ls/ (i+1);
            long long ra = (i==n-1) ? 0 : rs/ (n-i-1);

            long long diff = abs(la-ra);
            if(diff < result){
                result = diff;
                index = i;
                    }
        }
        return index;
    }
};