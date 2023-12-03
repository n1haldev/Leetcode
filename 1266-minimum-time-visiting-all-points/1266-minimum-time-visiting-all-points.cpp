class Solution {
public:
    int distance(const vector<int> &point1, const vector<int> &point2) {
        int x_diff = abs(point2[0] - point1[0]);
        int y_diff = abs(point2[1] - point1[1]);
        
        return (x_diff > y_diff) ? x_diff : y_diff;
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int iter = 0; iter < points.size() - 1;) {
            ans += distance(points[iter], points[++iter]);
        }
        
        return ans;
    }
};