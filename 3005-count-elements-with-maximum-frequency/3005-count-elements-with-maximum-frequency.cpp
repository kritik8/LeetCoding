class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //one pass vala
        vector<int> vec(101);
        int maxfreq=0, total =0;
        for(int &num: nums){
            vec[num]++;
            int freq = vec[num];

            if(freq > maxfreq){
                maxfreq=freq;
                total = maxfreq;
            }else if(freq==maxfreq){
                total += maxfreq;
            }
        }
        return total;
    }
};