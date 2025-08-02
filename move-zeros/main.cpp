/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        std::vector<int> zeroNumbers;

        for (size_t i = 0; i < nums.size(); i++) {
            while (nums[i] == 0 && nums.size() > 1) {
                zeroNumbers.push_back(nums[i]);
                nums.erase(nums.begin() + i);

                if (i >= nums.size())
                    break;
            }
        }
        for (int zero : zeroNumbers) {
            nums.push_back(zero);
        }
    }
};