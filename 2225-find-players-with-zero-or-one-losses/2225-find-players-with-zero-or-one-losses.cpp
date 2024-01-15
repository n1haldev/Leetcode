class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> winCount;
        map<int, int>lossCount;
        
        for(auto it: matches) {
            winCount[it[0]]++;
            lossCount[it[1]]++;
        }
        
        vector<int> no_loss;
        vector<int> one_loss;
        
        for(auto it: lossCount) {
            if(it.second == 1) {
                one_loss.push_back(it.first);
            }
        }
        
        for(auto it: winCount) {
            if(lossCount[it.first] == 0) {
                no_loss.push_back(it.first);
            }
        }
        
        vector<vector<int>> ans;
        ans.push_back(no_loss);
        ans.push_back(one_loss);
        
        return ans;
    }
};