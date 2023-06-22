#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    for (int num : nums) {
        if (numSet.count(num) > 0) {
            return true;  // Duplicate found
        }
        numSet.insert(num);
    }
    return false;  // No duplicates found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 4, 5};  // Example array
    
    bool hasDuplicates = containsDuplicate(nums);
    
    if (hasDuplicates) {
        std::cout << "Array contains duplicates.\n";
    } else {
        std::cout << "Array does not contain duplicates.\n";
    }
    
    return 0;
}
