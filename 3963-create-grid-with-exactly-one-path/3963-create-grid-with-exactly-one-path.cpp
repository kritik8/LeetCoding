class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> vec(m, string(n, '#') );
int i=0, j=0;
        vec[0][0] = '.';
        
        while(j+1 < n)
                vec[i][++j]='.';
    while(i+1 < m)
            vec[++i][j] = '.';
        
        return vec;
    }
};