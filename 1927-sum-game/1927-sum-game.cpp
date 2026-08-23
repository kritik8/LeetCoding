class Solution {
public:
pair<int, int> gett(string s){
    int nn=0, qq=0;
    for(char ch: s){
        if(ch == '?'){
            ++qq;
        }else{
            nn += (ch - '0');
        }
    }
    return {nn, qq};
}
    bool sumGame(string num) {
        int n = num.size();
        
        pair<int, int> x = gett(num.substr(0, n/2));
        pair<int, int> y = gett(num.substr(n/2, n/2));
        int n0 = x.first, q0 = x.second, n1 = y.first, q1 = y.second;
        return ((q0+q1)%2 == 1) || (n0-n1 != (q1-q0)*9/2);
    }
};