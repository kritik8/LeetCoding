class Solution {
public:
    void computeLPS(string pattern, vector<int>& lps) {
        int M = pattern.length();
        int len = 0; 
        lps[0] = 0; 

        int i = 1;
        while (i < M) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    vector <int> KMP(string pat, string txt) {
        int N = txt.length();
        int M = pat.length();
        vector<int> result;
        vector<int> lps(M, 0);
        computeLPS(pat, lps);

        int i = 0; 
        int j = 0;

        while (i < N) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }
            if (j == M) {
                result.push_back(i-j); 
                j = lps[j - 1];
            } else if (i < N && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return result;
    }
    
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        int n = s.length();
        vector<int> veca = KMP(a, s);
        vector<int> vecb = KMP(b, s);

        vector<int> result;

        for(int &i: veca){
            int left_limit = max(0, i-k);
            int right_limit = min(n-1, i+k);

            auto it= lower_bound(vecb.begin(), vecb.end(), left_limit);
            if(it != vecb.end() && *it <= right_limit){
                result.push_back(i);
            }
        }
        return result;
    }
};