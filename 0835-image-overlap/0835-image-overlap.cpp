class Solution {
public:
int countoverlap(vector<vector<int>>& a, vector<vector<int>>& b, int rf, int cf){
    int n = a.size();
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int bi = i + rf;
            int bj = j + cf;
            if(bi < 0 || bi >=n || bj < 0 || bj >=n )
                continue;
            
            if(a[i][j] == 1 &&  b[bi][bj] == 1)
                count++;
        }
    }
    return count;
}
    int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        int maxoverlap =0;
        for(int rf = -n+1 ; rf <n; rf++){
            for(int cf = -n+1 ; cf <n; cf++){
                int count = countoverlap(a, b, rf, cf);
                maxoverlap = max(maxoverlap, count);
            }
        }
        return maxoverlap;
    }
};