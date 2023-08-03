class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        std::vector<int> vec;

        std::multimap<int, int, greater<int>> multim;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] += 1;
        }

        for(auto i : m) {
            multim.insert({i.second, i.first});
        }

        int y = 0;
        for (auto i : multim) {
            if (y == k) break;
            std::cout << i.second << std::endl;
            vec.push_back(i.second);
            y++;
        }

        return vec;
    }
};
