class Solution {
public:
    int trap(vector<int>& height) {
       
int n= height.size();
vector<int>lmax(n);
vector<int>rmax(n);

vector<int>m(n);
vector<int>ans(n);

int maxl=INT_MIN;
for(int i=0;i<n;i++){
maxl=max(maxl,height[i]);
lmax[i]=maxl;
}

int maxr=INT_MIN;
for(int i=n-1;i>=0;i--){
maxr=max(maxr,height[i]);
rmax[i]=maxr;
}

for(int i=0;i<n;i++){
    m[i]=min(rmax[i],lmax[i]);
}

for(int i=0;i<n;i++){
   ans[i]=m[i]-height[i];
}

long long sum=0;

for(int i=0;i<n;i++){
    sum+=ans[i];
}

return sum;

    }
};