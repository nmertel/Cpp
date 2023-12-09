#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = { 0, 1, 2, 2, 2, 3, 0, 4, 2 };
    int val = 2;
    int length = size(nums);

    Solution s;
    int k = s.removeElement(nums, val);

    cout << "Initial size: " << length << endl;
    cout << "New size: " << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}