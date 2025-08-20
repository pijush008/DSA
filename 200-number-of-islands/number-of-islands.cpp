class Solution {
public:
    void check(int i,int j,vector<vector<char>>& grid,vector<vector<int>>&vis){
      
      if(i<0||i>=grid.size()||j<0||j>=grid[0].size())
      return;
      if(grid[i][j]=='0')return;
      if(vis[i][j]!=-1){
        return;
      }
       vis[i][j]=1;
      check(i+1,j,grid,vis);
      check(i-1,j,grid,vis);
      check(i,j+1,grid,vis);
      check(i,j-1,grid,vis);
    }
    int numIslands(vector<vector<char>>& grid) {
      int x=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
          for(int j=0;j<grid[0].size();j++){
            if(vis[i][j]==-1&& grid[i][j]=='1'){
              check(i,j,grid,vis);
              x++;

           }
          }
        }
        return x;
    }
};