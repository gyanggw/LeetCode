class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> answer;
        k = k % nums.size();
        int h = nums.size() - k;

        for (int i = h; i < nums.size(); ++i) {
            answer.push_back(nums[i]);
        }

        for (int i = 0; i < h; ++i) {
            answer.push_back(nums[i]);
        }

        nums=answer;
    }
};