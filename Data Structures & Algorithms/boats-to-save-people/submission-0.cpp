class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0, l =0, r = people.size() - 1;
        sort(people.begin(), people.end());
        while(l <= r){
            if(l == r){
                ans++;
                break;
            }
            else{
                int sum = people[l] + people[r];
                
                if(sum > limit){
                    r--;
                    ans++;
                }
                else{
                    l++;
                    r--;
                    ans++;
                }
            }
        }
        return ans;
    }
};