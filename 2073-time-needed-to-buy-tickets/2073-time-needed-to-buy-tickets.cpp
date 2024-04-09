class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int count = tickets[k] * n;
        int sub = tickets[k];
        
        for(int i = 0;i < n; i++) {
            tickets[i] = tickets[i] - sub;
        }
        
        // for(int i = 0;i < n; i++) {
        //     cout << tickets[i] << " " << endl;
        // }
        
        for(int i = 0;i < n; i++) {
            if(tickets[i] < 0) {
                count += tickets[i];
            }
        }
        
        for(int i = k+1;i < n; i++) {
            if(tickets[i] >= 0) {
                count--;
            }
        }
        
        return count;
        
//         int ans = 0;
//         int fn = n;
        
//         for(int i = 0;i < n; i++) {
//             int ind = *min_element(tickets.begin(), tickets.end());
            
//             ans = ans + tickets[ind] * fn;
//             fn--;
//             tickets[ind] = INT_MAX-1;
//             cout << ind << " ";
//             if(ind == k) {
//                 break;
//             }
//         }
        
//         return ans;
    }
};