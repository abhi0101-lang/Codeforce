#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

int maxSubArraySum(const vector<int>& nums) {
    int max_so_far = nums[0];
    int max_ending_here = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        max_ending_here = max(nums[i], max_ending_here + nums[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum is " << maxSubArraySum(nums) << endl;
    return 0;
}
