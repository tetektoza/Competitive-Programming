class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        std::sort(potions.begin(), potions.end());

        long long res = 0;
        std::vector<int> result_vec;
        int left, right, mid;
        for (int i = 0; i < spells.size(); i++) {
            left = 0;
            right = potions.size()-1;
            int count = 0;

            while (left <= right) {
                mid = left + (right-left)/2;

                res = spells[i] * 1ll * potions[mid];

                if (res < success) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                    count = potions.size()-mid;
                }
            }

            result_vec.push_back(count);

        }

        return result_vec;
    }
};
