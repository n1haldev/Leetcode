class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int j=0, count=0;
        for(int i=0;i<=n;i++) {
            j=i;
            count = 0;
            while(j!=0) {
                if(j%2==1) {
                    count+=1;
                }
                j/=2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};