#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    int duplicate = 0;
    int missing = 0;

    for (int num : nums) {
        if (numSet.count(num) == 0) {
            numSet.insert(num);
        } else {
            duplicate = num;
        }
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (numSet.count(i) == 0) {
            missing = i;
            break;
        }
    }

    return {duplicate, missing};
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 2, 2, 4};  // Assuming n = 4
    std::vector<int> result = findErrorNums(nums);

    std::cout << "Duplicate number: " << result[0] << std::endl;
    std::cout << "Missing number: " << result[1] << std::endl;

    return 0;
}
