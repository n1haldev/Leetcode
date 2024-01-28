class Solution {
public:
    string preprocess(string s) {
        string pre;
        
        for(auto it : s) {
            if(!isalpha(it) && !isdigit(it))
                continue;
            else if(isupper(it)) 
                pre.push_back(it + 32);
            else
                pre.push_back(it);
        }
        
        return pre;
    }
    
    void recurseReverse(int l, int r, string &s) {
        if(l >= r)
            return;
        
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        
        recurseReverse(l+1, r-1, s);
    }
    
    bool isPalindrome(string s) {
        s = preprocess(s);
        cout << s << endl;
        
        int l = 0;
        int r = s.length() - 1;
        
        string original = s;
        recurseReverse(l, r, s);
        
        if(s != original)
            return false;
        
        return true;
    }
};