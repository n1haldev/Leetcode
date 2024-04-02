class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        map<char, char> rev_map; 
        for(int i = 0;i < t.length(); i++) {
            char key = t[i];
            char val = s[i];
            
            if(mp.find(key) != mp.end()) {
                if(mp[key] != val) {
                    return false;
                }
            }
            else {
                mp[key] = val;
            }
            
            if(rev_map.find(val) != rev_map.end()) {
                if(rev_map[val] != key) {
                    return false;
                }
            }
            else {
                rev_map[val] = key;
            }
        }
        
        return true;
    }
};