class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       int n = words.size();
       string ans = "";
       for(int i=0; i<n; i++){
        int sum =0;
        for(int j=0; j< words[i].size(); j++){
            sum += weights[words[i][j] - 'a'];
        }
        sum = sum%26;
        char ch = 'a' + (25 - sum);
        ans.push_back(ch);
       }
       return ans;  
    }
};