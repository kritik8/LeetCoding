class Solution {
public:
int binarysearch(vector<int>& nums, int n, int t){
    int l=0, r=n-1;
    int mid ;

    int resultidx = -1;
    while(l<=r){
        mid = l + (r-l)/2;

        if(nums[mid] <= t){
            resultidx = mid;
            l = mid+1;
        }else{
            r=mid-1;
        }
    }
    return resultidx+1;
}
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> result;

        for(int i=1; i<n; i++){
            nums[i] += nums[i-1];
        }

        for(int &query: queries){
            int count = binarysearch(nums, n, query);
            result.push_back(count);
        }
return result;
    }
};