class Solution {
public: 
    int minSwaps(vector<int>& nums) {
        auto lambda = [](int x){
            int s = 0;
            while(x>0){
                s += x%10;
                x/=10;
            }
            return s;
        };       
        int n = nums.size();
        vector<pair<int, int>> k;
        for(int x: nums){
            k.push_back({lambda(x), x});

        }
        ranges::sort(k);
        unordered_map<int, int> rank;
        for(int i=0; i<n; i++){
            rank[k[i].second] = i;
        }
        vector<int> h;
        for(int x: nums){
            h.push_back(rank[x]);
        }

        int swapp=0;
        for(int i=0; i<n; i++){
            while(h[i] != i){
                int j = h[i];
                swap(h[i], h[j]);
                swapp++;
            }
        }
        return swapp;
    }
};