class Solution {
public:
    string fractionAddition(string expression) {
        int num =0;
        int denom =1;
        int i=0; int n = expression.length();
        while(i<n){
            int currnum =0;
            int currdenom =0;

            bool isneg = (expression[i] == '-');
            if(expression[i] == '+' || expression[i] == '-'){
                i++;
            }
            while(i<n && isdigit(expression[i])){
                int val = expression[i] - '0';
                currnum = (currnum*10) + val;
                i++;
            }
            i++;

            if(isneg == true){
                currnum *= -1;
            }

            while(i<n && isdigit(expression[i])){
                int val = expression[i]- '0';
                currdenom = (currdenom*10)+val;
                i++;            
                }
        

        num = num*currdenom + denom*currnum;
        denom = denom * currdenom;
        }
int gcd = abs(__gcd(num, denom));

num /= gcd;
denom /= gcd;

return to_string(num) + "/" + to_string(denom);
        }
    
};