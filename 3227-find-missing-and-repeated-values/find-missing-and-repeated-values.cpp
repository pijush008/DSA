class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      
  int n=grid.size();
  int total=n*n;
  vector<int>num(total+1,0);

  for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
  num[grid[i][j]]++;
 }
  }

int repeat=1,missing=0;
  for(int i=1;i<=total;i++){
    if(num[i]==2) repeat = i;
    if(num[i]==0) missing =i;
  }
  return {repeat,missing};
    }
};