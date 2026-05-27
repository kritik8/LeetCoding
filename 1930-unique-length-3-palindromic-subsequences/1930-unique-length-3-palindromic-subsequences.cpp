class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        //first aur last index ko vec mai store kr dete hai
        vector<pair<int, int>> vec(26, {-1, -1});
        for(int i=0; i<n; i++){
            if(vec[s[i]-'a'].first == -1){
                vec[s[i]-'a'].first=i;
            }
            vec[s[i]-'a'].second = i;
        }

        int result=0;
        for(int i=0; i<26; i++){
            int left = vec[i].first;
            int right = vec[i].second;

            if(left==-1)
                continue;

            unordered_set<char> st;
            for(int middle = left + 1 ; middle < right; middle++){ 
                st.insert(s[middle]);
            }
            result += st.size();
        }
        return result;
    }
};