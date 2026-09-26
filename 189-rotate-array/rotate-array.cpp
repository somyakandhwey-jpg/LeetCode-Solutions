class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handles cases where k >= n

        // 1. Reverse all elements
        reverse(nums.begin(), nums.end());
        
        // 2. Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // 3. Reverse remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};