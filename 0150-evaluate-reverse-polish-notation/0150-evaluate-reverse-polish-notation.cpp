class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        
        for(auto it: tokens) {
            if(isdigit(it[0]) || it.size() > 1) {
                stk.push(stoi(it));
            }
            else {
                int op2 = stk.top();
                stk.pop();
                int op1 = stk.top();
                stk.pop();
                
                if(it == "+") {
                    stk.push(op1+op2);
                }
                else if(it == "-") {
                    stk.push(op1-op2);
                }
                else if(it == "*") {
                    stk.push(op1*op2);
                }
                else {
                    stk.push((int)(op1/op2));
                }
            }
        }
        
        return stk.top();
    }
};