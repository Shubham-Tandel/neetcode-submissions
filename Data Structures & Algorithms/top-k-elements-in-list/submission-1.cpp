class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto num : nums){
            if(mp.find(num) != mp.end()){
                mp[num]++;
            }
            else{
                mp[num] = 1;
            }
        }

        vector<pair<int, int>> arr;
        for(auto it : mp){
            arr.push_back({it.second, it.first});
        }
        sort(arr.begin(), arr.end(), greater<pair<int,int>>());

        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
