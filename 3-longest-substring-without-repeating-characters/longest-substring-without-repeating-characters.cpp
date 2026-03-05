class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        int maxc = 0;
        for (int i = 0; i < n; i++) {
            vector<bool> store(256, false);
            int count = 0;
            for (int j = i; j < n; j++) {
                if (store[s[j]]) {
                    break;
                } else {
                    store[s[j]] = 1;
                    count++;
                    maxc = max(maxc, count);
                }
            }
        }
        return maxc;
    }
};
