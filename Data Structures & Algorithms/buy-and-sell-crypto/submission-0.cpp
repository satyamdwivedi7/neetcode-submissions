class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int start = 0;
        int end = n - 1;
        int profit = 0;
        int maxProfit = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                profit = prices[j] - prices[i];
                if(profit > maxProfit){
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};
