class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums.size()/2;
        sort(nums.begin(), nums.end());
        int count = 0;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == nums[major])
                count++;
        }
        if(count > major)
            return nums[major];
    }
};