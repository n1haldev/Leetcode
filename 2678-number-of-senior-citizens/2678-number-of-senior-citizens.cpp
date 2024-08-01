class Solution {
public:
    int countSeniors(vector<string>& details) {
        int senior = 0;
        
        for(auto it: details) {
            string age_str = it.substr(11, 2);
            int age = stoi(age_str);
            if(age > 60) {
                senior++;
            }
        }
        
        return senior;
    }
};