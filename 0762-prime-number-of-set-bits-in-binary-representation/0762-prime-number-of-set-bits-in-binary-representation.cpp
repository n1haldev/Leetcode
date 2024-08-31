class Solution {
public:
    bool isPrime(int num){
        if(num == 1) return false;
        for(int i = 2;i <= sqrt(num); i++) {
            if(num % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int num_primes = 0;
        for(int i = left;i <= right; i++) {
            int count = 0;
            int temp = i;
            while(temp > 0) {
                count += (temp&1);
                temp >>= 1;
            }
            cout << count << endl;
            if(isPrime(count)) {
                num_primes++;
            }
        }
        return num_primes;
    }
};