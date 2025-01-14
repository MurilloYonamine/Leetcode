#include <iostream>
#include <vector>

/*
Given an array of integers nums and an integer target, return indices of the two
numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not
use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {

    std::vector<int> sum;

    for (int i = 0; i < nums.size(); i++) {

      for (int j = 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {

          if (j == i)
            continue;

          sum.push_back(i);
          sum.push_back(j);
          return sum;
        }
      }
    };
  };
  void print(std::vector<int> &nums) {
    std::cout << "[";
    for (int num : nums) {
      std::cout << " " << num << " ";
    }
    std::cout << "]";
  }
};

int main() {
  Solution solution;
  int target;
  std::vector<int> nums;
  int elements, numbersForVector;

  std::cout << "Enter the numbers os elements that will be in the list: ";
  std::cin >> elements;

  for (int i = 0; i < elements; i++) {
    std::cout << "#" << i + 1 << " Enter a number: ";
    std::cin >> numbersForVector;

    nums.push_back(numbersForVector);
  }

  std::cout << "Enter a target number: ";
  std::cin >> target;

  std::vector<int> sums = solution.twoSum(nums, target);

  solution.print(sums);

  return 0;
}