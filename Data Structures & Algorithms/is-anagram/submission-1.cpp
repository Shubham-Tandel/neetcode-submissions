class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char, int> s1, t1;

        for(int i = 0; i< s.size(); i++){
            if(s1.find(s[i]) != s1.end()){
                s1[s[i]]++;
            }
            else{
                s1[s[i]] = 1;
            }

            if(t1.find(t[i]) != t1.end()){
                t1[t[i]]++;
            }
            else{
                t1[t[i]] = 1;
            }
        }
        if(s1 == t1){
            return true;
        }
        else{
            return false;
        }
    }

    
    
};
