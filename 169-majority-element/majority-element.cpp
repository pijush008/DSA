#include <map>
class Solution {
public:
    int majorityElement(vector<int>& nums){
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
            

        }
        int x;
        int max=0;
       for (auto &map : m) { 
            if(map.second>max){
            max=map.second;
            x=map.first;}

        }
        return x;

    }
};