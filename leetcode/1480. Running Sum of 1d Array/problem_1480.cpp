#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> z;
        for (int i = 0; i < nums.size(); i++) {
            z.push_back(0);
        }

        int tmp = 0;
        for (int i = 0; i < nums.size(); i++) {
            z[i] = tmp + nums[i];
            tmp = z[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = z[i];
        }

        return nums;
    }
};

