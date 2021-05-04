class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vbool;
        int greatest_number_of_candies = 0;

        for (int i = 1; i <= candies.size(); i++) {
            if (greatest_number_of_candies < candies[i - 1]) {
                greatest_number_of_candies = candies[i - 1];
            }
        }

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] >= greatest_number_of_candies || candies[i] + extraCandies >= greatest_number_of_candies) {
                vbool.push_back(true);
            }
            else {
                vbool.push_back(false);
            }
        }
        return vbool;
    }
    
};
