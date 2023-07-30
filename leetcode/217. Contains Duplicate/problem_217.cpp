class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        bool res = false;
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size()-1) break;

            if (nums[i] == nums[i+1]) {
                res = true;
            }
        }

        return res;
    }
};
