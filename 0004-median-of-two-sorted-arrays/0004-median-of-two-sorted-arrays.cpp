class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        double sum = 0;
        for (int i = 0; i < nums1.size(); i++) {
            answer.push_back(nums1[i]);
            sum += nums1[i];
        }
        for (int j = 0; j < nums2.size(); j++) {
            answer.push_back(nums2[j]);
            sum += nums2[j];
        }
        sort(answer.begin(), answer.end());
        if (answer.size() % 2 == 0) {
            return (double)(answer[(answer.size() / 2) - 1] +
                   answer[answer.size() / 2] )/ 2.0;
        } else
            return answer.at((answer.size() / 2));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna