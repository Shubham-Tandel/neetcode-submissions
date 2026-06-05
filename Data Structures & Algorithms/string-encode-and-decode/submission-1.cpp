class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";
        for(auto str : strs){
            for(auto s : str){
                en += to_string((int)s);
                en += '#';
            }
            en += '|';
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string> ans;
    string curr = "";
    string num = "";

    for (char c : s) {

        if (c == '#') {
            curr += (char)stoi(num);
            num.clear();
        }
        else if (c == '|') {
            ans.push_back(curr);
            curr.clear();
        }
        else {
            num += c;
        }
    }

    return ans;
    }
};
