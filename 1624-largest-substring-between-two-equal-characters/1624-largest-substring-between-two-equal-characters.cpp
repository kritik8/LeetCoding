class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        vector<int> vec(26, -1);
        int result = -1;

        for(int i=0; i<n; i++){
            char ch = s[i];

            if(vec[ch-'a'] == -1)
                vec[ch-'a'] = i;
            else
                result = max(result, i - vec[ch - 'a'] - 1);
        }
        return result;
    }
};