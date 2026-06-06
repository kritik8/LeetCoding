class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n%2 != 0)
            return {};
        sort(changed.begin(), changed.end());
        unordered_map<int, int> mp;

        for(int &num: changed){
            mp[num]++;
        }
        vector<int> result;
        for(int &num: changed){
            int tw = 2*num;

            if(mp[num]==0) continue;
            if(mp.find(tw) == mp.end() || mp[tw]==0)
                return {};
else{
            result.push_back(num);
            mp[num]--;
            mp[tw]--;
   }   }
   return result;
    }
};