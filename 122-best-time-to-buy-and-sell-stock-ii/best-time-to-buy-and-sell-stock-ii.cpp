class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int maximumProfit = 0;
        int buy = prices[0];

        for(int i=1; i<n; i++){
            buy =min(prices[i], buy);// buy
            if(prices[i]> buy){// sell
            maximumProfit += prices[i]-buy;
            buy = prices[i];
            }
        }
        
        return maximumProfit;
    }
};