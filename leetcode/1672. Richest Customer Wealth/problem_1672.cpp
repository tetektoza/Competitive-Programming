class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int sum = 0;
        int max = 0;
        for (int i = 0; i < accounts.size(); i++) {
            sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];

            }
            if (max < sum) {
                max = sum;
            }
        }
        return max;
    }
};
