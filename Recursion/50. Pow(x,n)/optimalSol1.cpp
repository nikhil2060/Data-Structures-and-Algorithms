#include <cmath>

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0;
        if (n == 0) return 1;

        double result = powHelper(x, n);
        return (n < 0) ? 1 / result : result;
    }

private:
    double powHelper(double x, int n) {
        if (n == 0) return 1;

        double half = powHelper(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }
};