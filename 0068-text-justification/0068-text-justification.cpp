class Solution {
public:
int maxi;
string findline(int i, int j, int eachspace, int extraspace, vector<string>& words){
    string line;
    for(int  k=i; k<j; k++){
        line += words[k];

        if(k==j-1){
            continue;
        }
        for(int z = 1; z<= eachspace; z++){
            line += " ";
    }
    if(extraspace > 0){
        line += " ";
        extraspace--;
    }
    }

    while(line.length() < maxi){
        line += " ";
    }
    return line;
}
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();

        maxi = maxWidth;
int i=0;
        while(i<n){
            int lettercount = words[i].length();
            int j = i+1;
            int space =0;
            while(j<n && words[j].length() + 1 + space + lettercount <= maxWidth){
                lettercount += words[j].length();
                space++;
                j++;
            }
            int remain_slots = maxWidth - lettercount;
            int eachspace = space == 0 ? 0 : remain_slots/ space;
            int extraspace = space == 0 ? 0 : remain_slots % space;
if(j==n){
    eachspace = 1;
    extraspace = 0;
}
result.push_back(findline(i, j, eachspace, extraspace, words));
i=j;

        } 
return result;
    }
};