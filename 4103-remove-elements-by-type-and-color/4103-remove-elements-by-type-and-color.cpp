class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
  //       vector<int> t = types;
  //       vector<int> c = colors;
  //       bool b = true;
  //       while(b && !t.empty()){
  //           b= false;

  //           for(int i=0; i< (int)t.size(); ){
  //               int ty = t[i]; int co = c[i];
  //               int r = groupSize[ty];

  //               if(i + r <= t.size()){
  //                   bool v = true;
  //                   for(int j=0; j< r; j++){
  //                       if(t[i+j] != ty || c[i+j] != co){
  //                           v=false;
  //                           break;
  //                       }
  //                   }
  //                   if(v){
  //                       t.erase(t.begin() + i , t.begin() +i+r);
  //                       c.erase(c.begin() + i, c.begin() + i + r);
  //                       b=true; break;
  //                   }else{
  //                       i++;
  //                   }
  //               }else{
  //                   i++;
  //               }
  //           }
  //       }
  // return t.empty();

        vector<pair<pair<int, int>, int>> st;
        for(int i=0; i< types.size(); i++){
            int ty = types[i];
            int co = colors[i];

            if(!st.empty() && st.back().first.first == ty && st.back().first.second == co ){
                st.back().second++;
            }else{
                st.push_back({{ty, co}, 1});
            }
            if(!st.empty() && st.back().second == groupSize[st.back().first.first]){
                st.pop_back();
            }
        }
        return st.empty();
    }
};