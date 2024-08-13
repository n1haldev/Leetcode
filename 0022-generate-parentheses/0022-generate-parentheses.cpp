class Solution {
public:
    void gen(int op, int cl, int n, string &cur, vector<string> &ans) {
        if(op == cl && cl == n) {
            ans.push_back(cur);
            return;
        }
        if(op == 0 || op < n) {
            cur.push_back('(');
            gen(op+1, cl, n, cur, ans);
            cur.pop_back();
        }
        if(cl < n && cl < op) {
            cur.push_back(')');
            gen(op, cl+1, n, cur, ans);
            cur.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string cur;
        vector<string> ans;
        
        gen(0, 0, n, cur, ans);
        
        return ans;
    }
};