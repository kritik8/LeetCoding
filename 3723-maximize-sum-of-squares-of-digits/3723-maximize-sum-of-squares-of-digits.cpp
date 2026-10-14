class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num*9)
            return "";
        string ans = "";
        while(num > 0){
            ans += to_string( sum >= 9 ? 9 : sum);
            if(sum > 9) sum -= 9;
            else sum = 0;

            num--;
        }
        return ans;
    }
};