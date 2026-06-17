class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0)
            return {};
        
        vector<vector<int>> result(n, vector<int>(n));
        int top=0;
        int down =n-1;
        int left=0;
        int right = n-1;

        int cnt = 1;
        int id =0;
        while(top <= down && left <= right){
            if(id==0){
                for(int i=left; i<=right; i++){
                    result[top][i] = cnt;
                    cnt++;
                }
                top++;
            }
            if(id==1){
                for(int i=top; i<=down; i++){
                    result[i][right] = cnt;
                    cnt++;
                }
                right--;
            }
            if(id==2){
                for(int i=right; i>=left; i--){
                    result[down][i] = cnt;
                    cnt++;
                }
                down--;
            }
            if(id==3){
                for(int i=down; i>=top; i--){
                    result[i][left] = cnt;
                    cnt++;
                }
                left++;
            }
            id = (id+1)%4;
        }
return result;
    }
};