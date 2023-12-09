#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //using one variable which points the initial unique element
        int index = 0;
        for (int i = 1;i < nums.size();i++) {
            if (nums[i] != nums[i - 1]) {
                nums[index + 1] = nums[i];
                index++;
            }
        }
        return index + 1;
    }
};

int main() {
    vector<int> nums = { 0, 1, 1, 1, 2 };
    int initialSize = size(nums);

    Solution s;
    int newSize = s.removeDuplicates(nums);

    cout << "Initial size: " << initialSize << endl;
    cout << "New size: " << newSize << endl;

    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}