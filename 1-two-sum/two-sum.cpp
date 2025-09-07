class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        int i = 0, j = n - 1;
        // sort(nums.begin(), nums.end());
        // while (i < j) {
        //     if ((nums[i] + nums[j]) == target) {
        //         return {i, j};
        //     } else if ((nums[i] + nums[j]) > target) {
        //         j--;
        //     } else {
        //         i++;
        //     }
        // }
        // return {};

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
if((nums[i]+nums[j])==target){
    return { i, j };
}
            }
        }

        return {};
    }
};