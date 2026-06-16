class Solution {
public:
int m,n;
bool dfs(vector<vector<int>>& grid, int r, int c){

    if(r <0 || r>=m || c <0 || c >=n)
        return false;
    if(grid[r][c] == 1)
        return true;
    
    grid[r][c] = 1;
    bool left_close = dfs(grid, r, c-1);
    bool right_close = dfs(grid, r, c+1);
    bool up_close = dfs(grid, r-1, c);
    bool down_close = dfs(grid, r+1, c);

    return (left_close && right_close && up_close && down_close);
}
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    if(dfs(grid, i, j) == true){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};