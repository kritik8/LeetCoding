class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        for(int &s: students){
            q.push(s);
        }
        for(int i= sandwiches.size() -1 ; i>=0; i--){
            st.push(sandwiches[i]);
        }
        int count=0;
        while(!q.empty() && count < q.size()){
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                count=0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};