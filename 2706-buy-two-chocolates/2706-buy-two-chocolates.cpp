class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini = INT_MAX;
        int secmini = INT_MAX;
        for(int &price: prices){
            if(price < mini){
                secmini = mini;
                mini = price;
            }else{
                secmini = min(secmini, price);
            }
        }
        if(mini + secmini > money)
            return money;
        else
            return money - (mini + secmini);
    }
};