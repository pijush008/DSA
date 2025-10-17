class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int count = 0;
        int n = nums.size();

        int si = 0;

        if(n==1){
            return k;
        }
       
        for (int si = 0; si < n; si++) {
             int sum=0;
            for(int ei=si;ei<n;ei++){
            sum+=nums[ei];
            if (sum== k ) {
                count++;
        
            }
            }
            
        }
        return count;
    }
};