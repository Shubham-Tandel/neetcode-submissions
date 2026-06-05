class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1, t1;
        if(s.size() != t.size())
            return false;

        for(int i =0; i< s.size(); i++){

            if(s1.find(s[i]) != s1.end())
                s1[s[i]] = s1[s[i]] + 1;
            
            else
                s1[s[i]] = 1;

            if(t1.find(t[i]) != t1.end())
                t1[t[i]] = t1[t[i]] + 1;
            
            else
                t1[t[i]] = 1;
        }

        if(s1 == t1)
            return true;
        else
            return false;
    }
};
