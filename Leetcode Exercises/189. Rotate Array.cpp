#include <iostream>
#include <vector>

using namespace std;

/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100] */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if (k != 0) {
            reverse(nums.end() - k, nums.end());
            reverse(nums.begin(), nums.end() - k);
            reverse(nums.begin(), nums.end());
        }
    }
};

int main() {
    vector<int> nums = { 1,2,3,4,5,6 };
    int k = 3;

    Solution s;
    s.rotate(nums, k);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }

    cout << endl;
    return 0;
}