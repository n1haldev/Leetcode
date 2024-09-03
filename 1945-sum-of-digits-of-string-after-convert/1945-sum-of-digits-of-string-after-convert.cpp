class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(char &ch: s) {
            // num = (num*10) + ch;
            int temp = ch - 'a' + 1;
            // cout << temp << endl;
            while(temp != 0) {
                sum += (temp % 10);
                temp /= 10;
            }
        }
        k -= 1;
        int i = 0;
        int temp = sum;
        
        while(i < k) {
            int ans = 0;
            while(temp != 0) {
                ans += (temp % 10);
                temp /= 10;
            }
            temp = ans;
            i += 1;
        }
        
        return temp;
    }
};