class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count = 0;
        vector<int> vector_of_results;
        for (int i = 0; i < nums.size(); i++) {
            count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            vector_of_results.push_back(count);
        }
        return vector_of_results;
    }
};
