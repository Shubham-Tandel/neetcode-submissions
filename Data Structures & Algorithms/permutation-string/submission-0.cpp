class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26);
        vector<int> v2(26);
        int n1 = s1.size();
        int n2 = s2.size();
        if(n2<n1){
            return false;
        }
        for(auto c : s1){
            v1[c - 'a']++;
        }

        int i = 0, j = 0;

        while(j < n1){
            v2[s2[j] - 'a']++;
            j++;
        }
        if(v1 == v2){
            return true;
        }

        while(j < n2){
            v2[s2[i] - 'a']--;
            i++;

            v2[s2[j] - 'a']++;
            j++;

            if(v1 == v2){
                return true;
            }

        }
        return false;

    }
};
