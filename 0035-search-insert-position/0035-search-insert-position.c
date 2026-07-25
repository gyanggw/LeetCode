int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, flag = 0;
    int high = numsSize-1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            flag++;
            return mid;
        } else if (nums[mid] < target) {
            flag++;
            low = mid + 1;
        } else {
            flag++;
            high = mid - 1;
        }
    }

    if (flag != 0) {
        return low;
    }
    return -1;
}