class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        bool flag = true;
        int val;
        int duplicate, ans;
        sort(nums.begin(), nums.end());
        if(n==1) return nums[0];
        for (int i = 0; i < n;) {
            if (nums[i] == nums[i + 1]) {
                i += 2;
            } else {
                val= nums[i];
                break;
            }
        }
return val;
    }
    };