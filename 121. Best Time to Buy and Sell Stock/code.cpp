// Time Complexity: O(n) & Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            int cost = prices[i] - mini;
            profit = max(profit, cost);
        }
        return profit;
    }
};