class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n = matrix[0].size();
        int rminmax = INT_MIN;
        for(int row=0; row<m; row++){
            int rmin=INT_MAX;
            for(int col=0; col<n; col++){
                rmin = min(rmin, matrix[row][col]);
            }
            rminmax = max(rminmax, rmin);
        }
        int cmaxmin = INT_MAX;
        for(int col=0; col<n; col++){
            int cmax=INT_MIN;
            for(int row=0; row<m; row++){
                cmax = max(cmax, matrix[row][col]);
            }
            cmaxmin = min(cmaxmin, cmax);
        }
        if(rminmax==cmaxmin)
            return {rminmax};
        
        return {};
    }
};