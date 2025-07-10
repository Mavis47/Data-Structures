#include <iostream>
#include <vector>
using namespace std;

bool continuous_subarray(vector<int> &nums, int k) {
    int n = nums.size();
    
    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += nums[end];

            if (end - st + 1 >= 2) {
                if (k == 0) {
                    if (currSum == 0) {
                        return true;
                    }
                } else {
                    if (currSum % k == 0) {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main() {
    vector<int> nums1 = {23, 2, 4, 6, 7};
    int k1 = 6;
    cout << (continuous_subarray(nums1, k1) ? "true" : "false") << endl;

    vector<int> nums2 = {23, 2, 6, 4, 7};
    int k2 = 6;
    cout << (continuous_subarray(nums2, k2) ? "true" : "false") << endl;

    vector<int> nums3 = {23, 2, 6, 4, 7};
    int k3 = 13;
    cout << (continuous_subarray(nums3, k3) ? "true" : "false") << endl;

    return 0;
}
