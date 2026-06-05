class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i<prices.size(); i++){
            for(int j = i +1; j<prices.size(); j++){
                int prof = prices[j] - prices[i];
                if(prof > profit){
                    profit = prof;
                }
            }
        }
        return profit;
    }
};
