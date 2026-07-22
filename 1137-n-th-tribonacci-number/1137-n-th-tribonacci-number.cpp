class Solution {
public:
int t[38];
int find(int n){
    if(n==0)
            return 0;
    if(n==1 || n==2)
            return 1;
    if(t[n] != -1)
        return t[n];

    return t[n]=find(n-1)+ find(n-2)+ find(n-3);    
}
    int tribonacci(int n) {
        memset(t, -1, sizeof(t));
                return find(n);
    }
};