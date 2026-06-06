class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ')
                continue;
            else if(isalnum(s[i])){
                s[i] = tolower(s[i]);
                ans += s[i];
            }
        }
        int i = 0;
        int j = ans.size() - 1;

        while(i<j){
            if(ans[i] == ans[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
