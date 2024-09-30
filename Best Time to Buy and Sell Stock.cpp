class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minsoFar = INT_MAX;
        int maxProfit = 0;

        for(int i=0;i<prices.size();i++)
        {
            minsoFar = min(minsoFar, prices[i]);
            int profit = prices[i] - minsoFar;
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};
