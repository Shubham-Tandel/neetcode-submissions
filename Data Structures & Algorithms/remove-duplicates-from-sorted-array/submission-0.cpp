class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(auto num : nums){
            if(mp.find(num) != mp.end()){
                mp[num]++;
            }
            else{
                mp[num] = 1;
            }
        }
        int k = 0;
        nums.clear();
        for(auto n : mp){
            nums.push_back(n.first);
            k++;
        }
        return k;
    }
};