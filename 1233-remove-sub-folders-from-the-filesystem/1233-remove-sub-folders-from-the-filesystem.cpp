class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> result;
        
        result.push_back(folder[0]);
        for(int i=1; i<folder.size(); i++){
            string curr = folder[i];
            string last = result.back();
            last += '/';

            if(curr.find(last) != 0){
                result.push_back(curr);
            }
        }
        return result;
    }
};