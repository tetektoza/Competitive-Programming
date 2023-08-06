class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        std::vector<vector<int>> v;
        std::set<vector<int>> set;
        bool flag = 0;
        for (int i = 0; i < nums.size(); i++) {
            int k = nums.size() - 1;
            for (int j = i+1; j < nums.size();) {
                if (i == j || i == k || j == k) { break; }

                if (nums[i] + nums[j] + nums[k] == 0) {
                    set.insert({nums[i], nums[j], nums[k]});
                }
                else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                    continue;
                }

                j++;
            }
        }

        for(auto i : set) {
            v.push_back(i);
        }

        return v;
    }
};
