class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        for (int i = 0; i < n - 2; i++) {
            int lt = i + 1;
            int rt = n - 1;

            if (i>0 && nums[i] == nums[i-1])
                continue;


            while (lt < rt) {
                 int sum = nums[i] + nums[lt] + nums[rt];
                if (sum == 0) {
                    res.push_back({nums[i], nums[lt], nums[rt]});

                    while (lt < rt && nums[lt] == nums[lt + 1]) {
                        lt++;
                    }
                    while (lt < rt && nums[rt] == nums[rt - 1]) {
                        rt--;
                    }
                    lt++;
                    rt--;
                } else if (sum > 0) {
                    rt--;
                } else {
                    lt++;
                }
            }
        }
        return res;
    }
};