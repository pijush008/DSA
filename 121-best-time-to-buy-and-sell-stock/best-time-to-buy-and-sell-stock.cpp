class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int n=prices.size();
vector<int>buy(n);
buy[0]=INT_MAX;

for(int i=1;i<n;i++){
    int mini=min(buy[i-1],prices[i-1]);
    buy[i]=mini;
}

vector<int>sell(n);
int maxi=INT_MIN;
for(int i=0;i<n;i++){
    sell[i]=prices[i]-buy[i];
   maxi=max(maxi,sell[i]);
}

if(maxi<=0){
    return 0;
}
return maxi;


    }
};