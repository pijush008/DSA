class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        



for(int j=0;j<nums.size()-1;j++){

for(int i=j+1;i<nums.size() && i<=(k+j);i++){

    if(nums[j]==nums[i] && (i-j)<=k){
        return true;
    }
   
}
}

return false;

    }
};