class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int r = 0;
        int ans = 0;

        unordered_map<char, int> mp;

        while (r < s.length()) {

            mp[s[r]]++;

            int maxfreq = 0;
            for (auto p : mp) {
                maxfreq = max(maxfreq, p.second);
            }

            while ((r - l + 1) - maxfreq > k) {
                mp[s[l]]--;

                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }

                l++;

                maxfreq = 0;
                for (auto p : mp) {
                    maxfreq = max(maxfreq, p.second);
                }
            }

            ans = max(ans, r - l + 1);

            r++;
        }

        return ans;
    }
};