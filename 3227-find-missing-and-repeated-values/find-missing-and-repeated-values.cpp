class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
int n= grid.size();
int m=grid[0].size();

int tot=n*m;

vector<int> v(tot+1,0);

for(int i=0;i<n;i++){
    
    for(int j=0;j<m;j++){
     v[grid[i][j]]++;
    }
}


vector<int>ans(2);

for(int i=1;i<=tot;i++){
    if(v[i]>1){
        ans[0]=i;
    }
    if(v[i]==0){
        ans[1]=i;
    }
    }

    return ans;
};

    };
