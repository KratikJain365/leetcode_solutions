class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int Maxprofit = 0;
        int Buy = prices[0];
        for(int i = 1; i<n; i++){
            //ye bhi check karenge ki kahin humara yahi price best to nhi hai kharidne ke liye.
            Buy = min(prices[i], Buy);

            
            if( prices[i]> Maxprofit){
                //  sell kardenge.
                Maxprofit = max( Maxprofit , prices[i]- Buy);
            }
            
        }
        return Maxprofit;
        
    }
};