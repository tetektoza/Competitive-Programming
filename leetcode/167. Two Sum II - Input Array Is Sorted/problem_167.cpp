class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int> res;

        int y = numbers.size()-1;
        for (int i = 0; i < numbers.size();) {
            if (numbers[i] + numbers[y] == target) {
                res.push_back(i+1);
                res.push_back(y+1);
                break;
            }
            else if (numbers[i] + numbers[y] > target) {
                y--;
                continue;
            }

            i++;
        }


        return res;
    }
};
