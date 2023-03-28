class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_profit=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
             mini=min(mini,prices[i]);
            current_profit=max(current_profit,prices[i]-mini);
           
        }
        return current_profit;
        
    }
};
