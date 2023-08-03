class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (!nums.size()) return 0;

            std::sort(nums.begin(), nums.end());

            int biggest = 1, curr = 1;
            bool flag = false;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] == nums[i-1]) continue;

                if (nums[i]-1 == nums[i-1]) {
                    curr++;
                    flag = true;
                    continue;
                } else if (flag) {
                    biggest = curr > biggest ? curr : biggest;
                    curr = 1;
                }
                
                
            }

            return curr > biggest ? curr : biggest;
        }
};
