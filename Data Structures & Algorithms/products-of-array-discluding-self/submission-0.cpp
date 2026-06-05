class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left(n);
        vector<int> right(n);

        right[0] = 1;
        left[n-1] = 1;
        
        for(int i = 1; i< n; i++){
            right[i] = right[i-1] * nums[i-1];
        }

        for(int j = n-2; j>=0; j--){
            left[j] = left[j+1] * nums[j+1];
        }

        for(int i = 0; i<n; i++){
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};
