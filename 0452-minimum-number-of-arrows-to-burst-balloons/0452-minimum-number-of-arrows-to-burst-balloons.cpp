#include <vector>
#include <algorithm>

class Solution {
public:
    int findMinArrowShots(std::vector<std::vector<int>>& points) {
        if (points.empty()) return 0;
        
        // Sort balloons based on ending points
        std::sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        
        int arrows = 1;
        int end = points[0][1];
        
        // Iterate through sorted balloons
        for (int i = 1; i < points.size(); ++i) {
            // If the current balloon starts after the previous one's end, shoot a new arrow
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1]; // Update the end point
            }
        }
        
        return arrows;
    }
};