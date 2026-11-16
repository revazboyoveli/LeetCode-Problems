class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || n == 0) return 1.0;

        long long N = n;
        bool isNeg = (N < 0);
        if(isNeg){
            N = -N;
        }

        double ans = 1.0;
        while(N>0){
            if(N % 2 == 1){
                ans *= x;
            }
            x *= x;
            N /= 2;
        }
        
        return isNeg ? (1.0 / ans) : ans; 
    }
};