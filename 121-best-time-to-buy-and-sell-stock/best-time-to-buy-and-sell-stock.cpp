class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
int n=prices.size();

int buy[n];
buy[0]=INT_MAX;

for(int i=1;i<n;i++){
  buy[i]=min(buy[i-1],prices[i-1]);
}

int maxprofit=0;
for(int i=0;i<n;i++){
  prices[i]=prices[i]-buy[i];
  maxprofit=max(maxprofit,prices[i]);
}

return maxprofit;
    }
};