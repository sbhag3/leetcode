class Solution {
public:
    int tribonacci(int n) {
        long res[40];
        res[0] = 0;
        res[1] = 1;
        res[2] = 1;
        for (int i = 3; i < 40; i++) {
            res[i] = res[i - 3] + res[i - 2] + res[i - 1];
        }
        return res[n];
    }
};
