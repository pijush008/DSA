class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;

        if (n == 0) {
            return 0;
        }
vector<int>p(n);
p[0]=nums[0];
        for (int i = 1; i < n; i++) {
            p[i]=p[i-1]+nums[i];
        }

map<int,int>freq;
freq[0]=1;

for(int end=0;end<n;end++){
    count+=freq[p[end]-k];
    freq[p[end]]++;
}
        return count;
    }
};