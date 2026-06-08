class Solution {
public:
    int jump(vector<int>& nums) {
        
      int n=nums.size();

      int far=0 ,jumpIdx=0 ,jump=0;

      for(int i=0;i<n-1;i++){
        far=max(far,i+nums[i]);
        
        if(i==jumpIdx){
            jump++;
            jumpIdx=far;
        }
        
      } 

       return jump;
    }
};