class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        
int n=matrix.size();
int m=matrix[0].size();

int rs=0;
int cs=0;
int re=n-1;
int ce=m-1;

vector<int>ans;

while(rs<=re && cs<=ce){

for(int i=cs;i<=ce;i++){
ans.push_back(matrix[rs][i]);
}

for(int i=rs+1;i<=re;i++){
ans.push_back(matrix[i][ce]);
}

if(rs<re){
for(int i=ce-1;i>=cs;i--){
ans.push_back(matrix[re][i]);
}
}


if(cs<ce){
for(int i=re-1;i>rs;i--){
ans.push_back(matrix[i][cs]);
}
}



rs++;
re--;
cs++;
ce--;


}

return ans;

    }
};