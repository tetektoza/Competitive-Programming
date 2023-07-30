class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, int> m;

        std::vector<std::vector<std::string>> v;

        int k = 0;
        for (int i = 0; i < strs.size(); i++) {
            std::string sorted = strs[i];
            std::sort(sorted.begin(), sorted.end());
            if (!m.count(sorted)) {
                v.push_back(std::vector<std::string>());
                m[sorted] = k;
                k++;
            }
            v[m[sorted]].push_back(strs[i]);
        }

        return v;
    }
};
