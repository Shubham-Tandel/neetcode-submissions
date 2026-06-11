class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_set<char> subStr;
        for(int r =0; r< s.size(); r++){

            while(subStr.find(s[r]) != subStr.end()){
                subStr.erase(s[l]);
                l++;
            }
            subStr.insert(s[r]);
            ans = max(ans, r-l + 1);
        }
        return ans;
    }
};
