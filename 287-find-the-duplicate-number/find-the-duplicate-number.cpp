class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        vector<int> s(n+1, 0);

        int count = 0;
        int ans=0;
        for (int i = 0; i < n; i++) {
            int val = nums[i];
            
            if (s[val]==1) {
               return val;
            }

           s[val] = 1;
        }
        return -1;
    }
};