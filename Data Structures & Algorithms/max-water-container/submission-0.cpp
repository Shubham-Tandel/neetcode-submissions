class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int i = 0, j = heights.size() - 1;
        while(i<j){
            int water = (j - i) * min(heights[i], heights[j]);
            if(water > maxWater){
                maxWater = water;
            }
            if(heights[i] < heights[j]){
                i++;
            }
            else if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }
};
