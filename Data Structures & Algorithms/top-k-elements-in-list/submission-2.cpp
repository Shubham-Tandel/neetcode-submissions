class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map <int, int> mp;
        for(auto n : nums){
            if(mp.find(n) != mp.end()){
                mp[n]++;
            }
            else{
                mp[n] = 1;
            }
        }
        
        vector<pair<int, int>> pr;

        for(auto n : mp){
            pr.push_back({n.second, n.first});
        }

        sort(pr.begin(), pr.end(), greater<pair<int, int>>());

        for(int i = 0; i<k; i++){
            ans.push_back(pr[i].second);
        }
        return ans;
    }
};
