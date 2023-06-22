#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            result.push_back(map[complement]);
            result.push_back(i);
            break;
        }
        map[nums[i]] = i;
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        std::cout << "Indices: " << indices[0] << ", " << indices[1] << std::endl;
        std::cout << "Values: " << nums[indices[0]] << ", " << nums[indices[1]] << std::endl;
    } else {
        std::cout << "No two elements add up to the target." << std::endl;
    }

    return 0;
}
