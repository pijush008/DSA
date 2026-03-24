class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int j = 0;

        while(i < n) {
            char ch = chars[i];
            int count = 0;

            // count occurrences
            while(i < n && chars[i] == ch) {
                i++;
                count++;
            }

            // write character
            chars[j++] = ch;

            // write count if > 1
            if(count > 1) {
                string s = to_string(count);
                for(char c : s) {
                    chars[j++] = c;
                }
            }
        }

        return j;
    }
};