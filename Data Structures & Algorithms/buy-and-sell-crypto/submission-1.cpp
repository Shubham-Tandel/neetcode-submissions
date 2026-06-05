class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, lowest = 0;

        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < prices[lowest]){
                lowest = i;
            }
            else{
                int p = prices[i] - prices[lowest];
                if(p > profit){
                    profit = p;
                }
            }
        }
        return profit;
    }
};
