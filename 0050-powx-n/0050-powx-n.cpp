class Solution {
public:
    long double helper(long double x, long long N) {
        if (N == 0) return 1.0L;

        long double half = helper(x, N / 2);

        if (N % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }

    double myPow(double x, int n) {
        long long N = n;
        long double base = x;

        if (N < 0) {
            base = 1.0L / base;
            N = -N;
        }

        return (double)helper(base, N);
    }
};