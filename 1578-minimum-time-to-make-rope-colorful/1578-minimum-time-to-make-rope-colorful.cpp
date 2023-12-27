class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        int len = colors.length();
        int max = 0;
        int prev = 0;
        
        for(int i = 1;i < len; i++) {
            if(colors[i] != colors[prev]) {
                prev = i;
            }
            else {
                if(neededTime[i] > neededTime[prev]) {
                    sum += neededTime[prev];
                    prev = i;
                }
                else {
                    sum += neededTime[i];
                }
            }
        }
        
        return sum;
    }
};