class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l =0, r = numbers.size() -1;
        vector<int> ans;
        while(l < r){
            int n = numbers[l] + numbers[r];
            if(n > target){
                r--;
            }
            else if(n < target){
                l++;
            }
            else{
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
        }
        return ans;

    }
};
