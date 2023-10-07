class Solution {
public:
    int divide(int dividend, int divisor) {
        int flag = 0;
        
        if(dividend == -2147483648) {
            if(divisor == 1)
                return -2147483648;
            else if(divisor == -1)
                return 2147483647;                
        }
        else if(dividend == 2147483647) {
            if(divisor == 1)
                return 2147483647;
            else if(divisor == -1)
                return -2147483647;
        }
        
        long int divid = dividend;
        long int divis = divisor;
        
        if(dividend < 0 && divisor < 0) {
            flag = 0;
            divid = (long)(dividend ^ -1) + 1;
            divis = (long)(divisor ^ -1) + 1;
        }
        else if(dividend < 0) {
            flag = 1;
            divid = (long)(dividend ^ -1) + 1;
        }
        else if(divisor < 0) {
            flag = 1;
            divis = (long)(divisor ^ -1) + 1;
        }
        
        long int ans = 0;
        long int temp;
        long dvd = divid;
        long dvs = divis;
        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            while (temp << 1 <= dvd) {
                temp <<= 1;
                m <<= 1;
            }
            dvd -= temp;
            ans += m;
        }
        
        if(flag == 0)
            return ans;
        return (ans ^ -1) + 1;
    }
};