class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max = 0;
        while (left < right) {
            int current = (right - left )* min(height[right], height[left]);

            if (max < current)
                max = current;
            if (height[right] < height[left])
                right--;
            else
                left++;
        }
        return max;
    }
};