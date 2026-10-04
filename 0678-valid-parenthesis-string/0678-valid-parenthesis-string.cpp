class Solution {
public:
    bool checkValidString(string s) {
        int i=0, j=0;
        for(char &ch: s){
            i += ((ch == '(') << 1) - 1;
            j += ((ch != ')') << 1) -1;
            if(j <0) 
                return 0;

            i = max(0, i);            
        }
        return i == 0;
    }
};