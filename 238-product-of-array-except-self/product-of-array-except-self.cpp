class Solution {
public:


    vector<int> productExceptSelf(vector<int>& nums) {

        int k=nums.size();
        vector<int>ans(k);


int prefix=1;
        for(int i=0;i<k;i++){
            ans[i]=prefix;
            prefix*=nums[i];
        }

        int suffix=1;
        for(int i=k-1;i>=0;i--){
            ans[i]*=suffix;
            suffix*=nums[i];
        }
return ans;

    }
};