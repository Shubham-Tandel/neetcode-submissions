class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;

        for(auto n : nums){
            if(mp.find(n) != mp.end()){
                mp[n]++;
                return true;
            }
            else{
                mp[n] = 1;
            }
        }
        return false;
    }
};