#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1;  // Index of last element in nums1
    int j = n - 1;  // Index of last element in nums2
    int k = m + n - 1;  // Index of last element in merged array

    // Merge nums1 and nums2 in reverse order
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // Copy any remaining elements from nums2 to nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    // Input arrays
    std::vector<int> nums1 = {1, 3, 5, 0, 0, 0};  // Example: [1, 3, 5] with capacity for merged elements
    std::vector<int> nums2 = {2, 4, 6};  // Example: [2, 4, 6]
    int m = 3;  // Number of elements in nums1
    int n = 3;  // Number of elements in nums2

    // Merge arrays
    merge(nums1, m, nums2, n);

    // Output the merged array
    std::cout << "Merged Array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
