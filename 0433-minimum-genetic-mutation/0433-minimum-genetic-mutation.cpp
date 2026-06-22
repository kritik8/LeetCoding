class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> st(bank.begin(), bank.end());

        unordered_set<string> visited;
        queue<string> q;

        q.push(start);
        visited.insert(start);

        int lvl =0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string curr = q.front();
                q.pop();

                if(curr == end)
                    return lvl;

                for(char ch: "ACGT"){
                    for(int i=0; i<curr.length(); i++){
                        string next = curr;
                        next[i] = ch;

                        if(visited.find(next) == visited.end() && st.find(next) != st.end()){
                            visited.insert(next);
                            q.push(next);
                        }
                    }
                }
            }
            lvl++;
        }
        return -1;
    }
};