class Solution {
    public:
        int sumOfMultiples(int n) {
            auto sumDivisibleBy = [](int x, int n) {
                int p = n / x;
                return x * (p * (p + 1)) / 2;
            };
    
            int sum3 = sumDivisibleBy(3, n);
            int sum5 = sumDivisibleBy(5, n);
            int sum7 = sumDivisibleBy(7, n);
            int sum15 = sumDivisibleBy(15, n);
            int sum21 = sumDivisibleBy(21, n);
            int sum35 = sumDivisibleBy(35, n);
            int sum105 = sumDivisibleBy(105, n);
    
            return sum3 + sum5 + sum7 - sum15 - sum21 - sum35 + sum105;
        }
    };
    