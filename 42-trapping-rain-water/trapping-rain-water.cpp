class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int leftmax[n];
        int rightmax[n];
        int water[n];

leftmax[0]=height[0];
        for(int i=1;i<n;i++){
leftmax[i]=max(leftmax[i-1],height[i-1]);
        }

        rightmax[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--){
            rightmax[j]=max(rightmax[j+1],height[j]);
        }


int ans=0;
for(int k=0;k<n;k++){
    water[k]=min(leftmax[k],rightmax[k]);
    ans+=max(0,water[k]-height[k]);
}

return ans;

    }
};