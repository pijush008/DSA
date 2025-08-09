class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
int count=0,candidate=0;

for(int i=0;i<n;i++){
int num=nums[i];
    if(count==0){
        candidate=num;
        count++;
    }
    else{
        if(candidate==num){
            count++;
        }else{
            count--;
        }
    }

}
    return candidate;
    }
};