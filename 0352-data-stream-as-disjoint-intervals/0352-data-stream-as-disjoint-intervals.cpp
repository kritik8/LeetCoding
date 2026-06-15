class SummaryRanges {
public:
map<int, int> mp;

    SummaryRanges() {
        mp.clear();        
    }
    
    void addNum(int value) {
        int left = value;
        int right = value;

        auto just_greater = mp.upper_bound(value);
        if(just_greater != mp.begin()){
            auto just_lower = just_greater;
            just_lower--;

            if(just_lower->second >= value)
                return;

            if(just_lower->second == (value-1))
                left = just_lower->first; 
        }
        if(just_greater != mp.end() && just_greater->first == (value+1)){
            right = just_greater->second;
            mp.erase(just_greater);
        }
        mp[left]=right;
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> result;

        for(auto &it: mp){
            result.push_back({it.first, it.second});
        }
        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */