class Solution {
public:
    void backtracking(int i, const string& digits, string temp, vector<string> &ans, map<char, string> &mp) {
        if(i == digits.length()) {
            if(temp.length())
            ans.push_back(temp);
            return;
        }
        
        for(char it : mp[digits[i]]) {
            backtracking(i+1, digits, temp + it, ans, mp);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        map<char, string> mp;
        mp['1'] = "";
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string letters = "abcdefghijklmnopqrstuvwxyz";
        
        backtracking(0, digits, "", ans, mp);
        
        return ans;
    }
};