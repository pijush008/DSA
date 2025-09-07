class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0;
        int ones=0;
        int twos=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeros++;
            }else if(nums[i]==1){
                ones++;
            }else{
                twos++;
            }
        }

int idx=0;
while(zeros>0){
    nums[idx]=0;
    idx++;
    zeros--;
}
while(ones>0){
    nums[idx]=1;
    idx++;
    ones--;
}
while(twos>0){
    nums[idx]=2;
    idx++;
    twos--;
}
        
    }
};