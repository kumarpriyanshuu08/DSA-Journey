class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n, true);
        for(int i = 2; (long long)i * i < n; i++) {
            if(isPrime[i]) {
                for(long long j = (long long)i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(isPrime[i]) {
                count++;
            }
        }
        return count;
    }
};