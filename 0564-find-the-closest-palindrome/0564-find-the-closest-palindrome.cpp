class Solution {
public:
long func(long first, bool even){
    long result = first;

    if(even==false){
        first /= 10;
    }
    while(first > 0){
        int digit = first % 10;
        result = (result*10) + digit;
        first /=10;
    }
    return result;
}
    string nearestPalindromic(string n) {
        int l = n.length();
        int mid = l/2;
        long long firsthalflen = (l%2 == 0) ? mid : (mid+1);
        long firsthalf =  stol(n.substr(0, firsthalflen));

        vector<long> result;

        result.push_back(func(firsthalf, l%2==0));
        result.push_back(func(firsthalf+1, l%2==0));
        result.push_back(func(firsthalf-1, l%2==0));
        result.push_back((long)pow(10, l-1) - 1);
        result.push_back((long)pow(10, l) + 1);

        long diff = LONG_MAX;
        long ans = -1;
        long orgnum = stol(n);

        for(long num: result){
            if(num == orgnum) continue;

            if(abs(num-orgnum) < diff){
                diff = abs(num-orgnum);
                ans=num;
            }else if(abs(num-orgnum) ==  diff){
                ans = min(ans, num);
            }
        }
return to_string(ans);
    }
};