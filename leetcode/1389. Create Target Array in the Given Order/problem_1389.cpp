class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> final;

        for (int i = 0; i < nums.size(); i++) {
            auto it = final.insert(final.begin() + index[i], nums[i]);
        }
        return final;
    }
};