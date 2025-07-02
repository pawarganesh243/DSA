class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Store value and index pairs
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // Step 2: Sort the pair array based on values
        sort(arr.begin(), arr.end());

        // Step 3: Two-pointer approach
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                // Return original indices
                return {arr[left].second, arr[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        // If no solution found (problem guarantees one)
        return {};
    }
};
