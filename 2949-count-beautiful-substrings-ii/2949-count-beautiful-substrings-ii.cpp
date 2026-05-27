class Solution {
public:

typedef long long ll;
bool isvowel(char c){
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
    long long beautifulSubstrings(string s, int k) {
        ll vowel=0; ll cons = 0;
        ll result =0;
        unordered_map<ll, unordered_map<ll, ll>> mp;
        mp[0][0]=1;

        for(char &ch: s){
            if(isvowel(ch)){
                vowel++;
            }else{
                cons++;
            }

            ll psum = (vowel-cons);
            for(auto &[pastcount, count]: mp[psum]){
                if((vowel%k - pastcount)*(vowel%k - pastcount) %k==0){
                    result+= count;
                }

            }
            mp[psum][vowel%k]++;
        }
        return result;
    }
};