class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int>right(n);
        vector<int>left(n);

        left[0]=nums[0];
        for(int i=1;i<n;i++){
            if(i%k == 0)left[i]=nums[i];
            else{
                left[i]=max(nums[i],left[i-1]);
            }
        }

        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(i%k ==0)right[i]=nums[i];
            else{
                right[i]=max(nums[i],right[i+1]);
            }
        }

        for(int i=0;i<=n-k;i++){
            ans.push_back(max(right[i],left[i+k-1]));
        }
        return ans;
    }
};