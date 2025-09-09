#include <vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        // Fixed the syntax for variable declaration
        int x = -1, y = -1;

        // This loop finds the LAST occurrence of the target
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                x = i;
            }
        }
        
        // This loop finds the FIRST occurrence of the target.
        // The loop start was also fixed to prevent an out-of-bounds error.
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == target) {
                y = i;
            }
        }
        
        return {y, x};
    }
};