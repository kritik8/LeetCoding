class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        vector<int> posseat(101, 0);
        vector<int> posstu(101, 0);
        for(int &pos: seats){
            posseat[pos]++;
        }for(int &pos: students){
            posstu[pos]++;
        }
        int i=0, j=0;
        int moves=0;
        while(i<=100 && j<= 100){
            if(posseat[i] == 0) i++;
            if(posstu[j]==0) j++;

            if(i<=100 & j<= 100 && posseat[i] != 0 && posstu[j] != 0){
                moves += abs(i-j);
                posseat[i]--;
                posstu[j]--;
            }
        }
        return moves;
    }
};