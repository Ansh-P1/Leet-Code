class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // 1. find first index from right where nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }

        // 2. if found, find element just larger than nums[i] from the right and swap
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // 3. reverse the suffix starting at i+1 (works even if i == -1, i.e. fully descending)
        reverse(nums.begin() + i + 1, nums.end());
    }
};