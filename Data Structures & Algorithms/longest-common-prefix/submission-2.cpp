class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string ans;

        for(int i = 0; i< first.length(); i++){
            char curr = first[i];

            for(int j =1; j<strs.size(); j++){
                if(curr != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(curr);
        }
        return ans;
        
    }
};