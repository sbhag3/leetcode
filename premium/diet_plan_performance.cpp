class Solution {
public:
    int points(int x, int lower, int upper) {
        if (x < lower) return -1;
        else if (x > upper) return 1;
        else return 0;
    }
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int ans = 0;
        int cals = 0;
        for (int i = 0; i < k; i++) cals += calories[i];
        ans += points(cals, lower, upper);
        for (int i = k; i < calories.size(); i++) {
            cals += (calories[i] - calories[i - k]);
            ans += points(cals, lower, upper);
        }
        return ans;
    }
};
