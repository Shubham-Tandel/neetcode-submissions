class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet = 0;
        int n = position.size();
        vector<pair<int,int>> ps;
        for(int i = 0; i<n; i++){
            ps.push_back({position[i], speed[i]});
        }
        sort(ps.begin(), ps.end(), greater<pair<int,int>>());

        stack<float> st;
        int i = 0;
        float currTime, nextTime;
        float dist;
        while(i < n){
            if(!st.empty()){
                dist = target - ps[i].first;
                nextTime = dist / ps[i].second;

                if(nextTime > currTime){
                    st.pop();
                    fleet++;
                    st.push(nextTime);
                    currTime= nextTime;
                }
                i++;
            }
            else{
                dist = (float)target - ps[i].first;
                currTime = dist / ps[i].second;
                st.push(currTime);
                fleet++;
                i++;
            }
            stack<float> temp = st;

            while(!temp.empty()){
                cout << temp.top() << " ";
                temp.pop();
            }
        }
        return fleet;
        
    }
};
