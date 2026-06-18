class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
        int n = temperatures.size();
        vector<int> res(n,0);
        stack<int> st;
        int i = 0;
        st.push(i);
        i++;
        while(i < n){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int tp = st.top();
                int days = i - tp;
                res[tp] = days;
                st.pop();
            }
            st.push(i);
            i++;
        }
        return res;
    }
};
