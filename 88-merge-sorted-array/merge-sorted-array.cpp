class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p=m+n;
        vector<int>arr;

for(int i=0;i<m;i++){
  arr.push_back(nums1[i]);
}

for(int j=0;j<n;j++){
  arr.push_back(nums2[j]);
}

sort(arr.begin(),arr.end());

for(int k=0;k<arr.size();k++){
  nums1[k]=arr[k];
}



}
    
};