class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length;
      
        int max = 0;
        for (int i = 0; i < k; i++) {
            max += nums[i];
        }
        int window_sum = max;
        for (int i = k; i < n; i++) {
            window_sum += nums[i] - nums[i - k];
            max = Math.max(window_sum, max);
        }
        return (double)max/k;
    }
}