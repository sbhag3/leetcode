class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1, 0);
        for (int i = 2; i < dp.size(); i++) {
            int one = dp[i - 1] + cost[i - 1];
            int two = dp[i - 2] + cost[i - 2];
            dp[i] = min(one, two);
        }
        return dp[dp.size() - 1];
        
    }
};
