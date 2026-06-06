class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int count = 1;
        int ans = 1;
        set<int> mp;

        for(auto n : nums){
            mp.insert(n);
        }

        int prev = *mp.begin();
        prev--;
        prev--;
        for(auto ch : mp){
            int curr = ch;

            if(curr == prev + 1){
                count++;
                if(ans < count){
                    ans = count;
                }
            }
            else{
                count = 1;
            }

            prev = curr;
        }
        return ans;
    }
};
