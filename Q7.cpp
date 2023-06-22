#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0;

    // Move all nonzero elements to the front of the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }

    // Fill the remaining positions with zeros
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}

int main() {
    // Example usage
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Modified Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
