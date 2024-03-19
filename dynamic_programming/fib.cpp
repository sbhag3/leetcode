class Solution {
public:
    int fib(int n) {
        int res[35];
        res[0] = 0;
        res[1] = 1;
        for (int i = 2; i < 35; i++) {
            res[i] = res[i - 1] + res[i - 2];
        }
        return res[n];
    }
};
