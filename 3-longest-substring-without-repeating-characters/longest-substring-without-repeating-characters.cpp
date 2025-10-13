class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        
        int maxLength = 0;
        
        for (int i = 0; i < n; i++) {
            vector<bool> visited(256, false);
            int count = 0;
            
            for (int j = i; j < n; j++) {
                if (visited[s[j]]) {
                    break;
                }
                visited[s[j]] = true;
                count++;
                maxLength = max(maxLength, count);
            }
        }
        
        return maxLength;
    }
};