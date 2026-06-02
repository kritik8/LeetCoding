class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(folder.begin(), folder.end());
        vector<string> result;
        for(string& curr: folder){
            bool issubfold=false;
            string tempfold= curr;
            while(!curr.empty()){
                size_t pos = curr.find_last_of('/');
                curr = curr.substr(0, pos);

                if(st.find(curr) != st.end()){
                    issubfold = true;
                    break;
                }
            }
            if(!issubfold){
                result.push_back(tempfold);
            }
        }
        return result;
    }
};