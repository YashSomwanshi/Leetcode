// Time Complexity: O(n) & Space Complexity: O(1)

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int maxDiff = 0;
        for (int i = 1; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
            int diff = nums[i] - mini;
            maxDiff = max(maxDiff, diff);
        }
        if (maxDiff <= 0) {
            return -1;
        } else
            return maxDiff;
    }
};