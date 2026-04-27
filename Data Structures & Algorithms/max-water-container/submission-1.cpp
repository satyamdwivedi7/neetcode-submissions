#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max = 0;
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                result = (j - i) * min(heights[i], heights[j]);
                if(result > max){
                    max = result;
                }
            }
        }
        return max;
    }
};
