#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return n;

        int indx = 2;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[indx - 2]) {
                nums[indx] = nums[i];
                indx++;
            }
        }
        return indx;
    }
};

int main() {
    vector<int> nums = { 0,0,1,1,1,1,2,3,3 };
    int length = size(nums);

    Solution s;
    int k = s.removeDuplicates(nums);

    cout << "Initial size: " << length << endl;
    cout << "New size: " << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}