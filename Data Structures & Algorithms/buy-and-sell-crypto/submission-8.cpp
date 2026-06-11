class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        if(prices.size() <= 1){
            return 0;
        }
        int min = 0;
        int max = 1;
        int curr = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[min] >= prices[max]){
                min = max;
                max++;
                if(max >= prices.size()){
                    break;
                }
            }
            else if(prices[min] < prices[max]){
                curr = prices[max] - prices[min];
                if(curr > ans){
                    ans = curr;
                }
                max++;
            }
        }
        return ans;

    }
};
