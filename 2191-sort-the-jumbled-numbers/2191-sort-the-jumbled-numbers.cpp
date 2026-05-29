class Solution {
public:
string getmapping(string &num, vector<int>& mapping){
    string temp = "";
    for(int i=0; i<num.length(); i++){
        char ch = num[i];
        int intch = ch - '0';

        temp += to_string(mapping[intch]);
    }
    return temp;
}
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++){
            string numstr = to_string(nums[i]);

            string mappedstr = getmapping(numstr, mapping);
            int mappednum = stoi(mappedstr);

            vec.push_back({mappednum, i});
        }

        sort(vec.begin(), vec.end());
        vector<int> result;
        for(auto &p: vec){
            int ogidx = p.second;
            result.push_back(nums[ogidx]);
        }
return result;
    }
};