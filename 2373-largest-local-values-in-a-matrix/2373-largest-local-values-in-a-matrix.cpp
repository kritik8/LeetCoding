class Solution {
public:
int findmaxlocal(vector<vector<int>>& grid, int r, int c){
    int maxval=INT_MIN;
    for(int x = r; x <= r+2; x++){
        for(int y=c; y<= c+2; y++){
            maxval = max(maxval, grid[x][y]);
        }
    }
    return maxval;
}
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxloc(n-2, vector<int>(n-2));
        for(int r=0; r<n-2; r++){
            for(int c=0; c<n-2; c++){
                maxloc[r][c] = findmaxlocal(grid, r, c);
            }
        }
        return maxloc;
    }
};