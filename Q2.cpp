#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;  // Number of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    // Example usage
    std::vector<int> nums = {3, 2, 2, 3, 1, 4, 2};
    int val = 2;

    int k = removeElement(nums, val);

    std::cout << "Number of elements not equal to val: " << k << std::endl;
    std::cout << "Updated nums: ";
    for (int i = 0; i < k; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
