class Solution {
public:
int m,n;
vector<vector<int>> dir = {{-1,0}, {0, -1}, {0, 1}, {1, 0}};

bool issafe(int i, int j){
    return (i>= 0 && i<m && j>=0 && j<n);
}
void dfs(vector<vector<int>>& grid, int i, int j, set<pair<int, int>>& visited){
    if(!issafe(i, j) || grid[i][j] == 0 || visited.find({i,j}) != visited.end()){
        return;
    }
    visited.insert({i, j});
    for(auto &d: dir){
        int newi = i + d[0];
        int newj = j + d[1];

        dfs(grid, newi, newj, visited);
    }
}
int bfs(vector<vector<int>>& grid, set<pair<int, int>>& visited){
    queue<pair<int, int>> q;
    for(auto &it: visited){
        q.push(it);
    }
    int level=0;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            pair<int, int> p = q.front();
            q.pop();

            int x = p.first;
            int y = p.second;

            for(auto &d: dir){
                int newx = x + d[0];
                int newy = y + d[1];

                if(issafe(newx, newy) && visited.find({newx, newy}) == visited.end()){
                    if(grid[newx][newy] == 1){
                        return level;
                    }
                    visited.insert({newx, newy});
                    q.push({newx, newy});
                }
            }
        }
        level++;
    }
    return -1;
}
    int shortestBridge(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        set<pair<int, int>> visited;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    dfs(grid, i, j, visited);
                    return bfs(grid, visited);
                }
            }
        }
        return -1;
    }
};