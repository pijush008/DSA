class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
int bestbuy[n];
bestbuy[0]=INT_MAX;

for(int i=1;i<n;i++){
    bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
}

int maxprofit=0;
int profit[n];
for(int i=0;i<n;i++){
profit[i]=prices[i]-bestbuy[i];
maxprofit=max(maxprofit,profit[i]);
}
return maxprofit;
    }
};