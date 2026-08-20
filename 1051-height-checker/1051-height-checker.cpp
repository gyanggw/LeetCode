class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> answer = heights;
        sort(answer.begin(), answer.end());
        int count = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != answer[i])
                count++;
        }
        return count;
    }
};