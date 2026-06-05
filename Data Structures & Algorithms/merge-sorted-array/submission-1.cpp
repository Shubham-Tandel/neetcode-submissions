class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j =0;
        vector<int> ans;
        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        sort(ans.begin(), ans.end());

        for(int x = 0; x < m+n; x++){
            nums1[x] = ans[x];
        }

    }
};