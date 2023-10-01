class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        for(int i = 0;i <= n;i++) {
            if(s[i] == ' ' || i == n) {
                for(int j = start;j < (start + i) / 2;j++) {
                    char temp = s[j];
                    s[j] = s[start + i - j - 1];
                    s[start + i - j - 1] = temp;
                }
                start = i + 1;
            }
        }
        return s;
    }
};