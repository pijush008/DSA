class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();


        int sum=nums[0];
int finalsum=nums[0];
        for(int i=1;i<n;i++){
            if(n==1){
                return nums[i];
            }
            
                 sum=max(nums[i],sum+nums[i]);

            finalsum=max(finalsum,sum);
           
        }

return finalsum;

        
    }
};