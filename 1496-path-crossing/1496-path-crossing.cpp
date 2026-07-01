class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> st;
        int x =0, y = 0;
        st.insert("0_0");
        for(char &ch : path){
            if(ch == 'N')
                y++;
            else if(ch == 'S')
                y--;
            else if(ch == 'E')
                x++;
            else
                x--;
            string key  = to_string(x) + "_" + to_string(y);
        
            if(st.find(key) != st.end())
                return true;
            
            st.insert(key);
        }
        return false;
    }
};