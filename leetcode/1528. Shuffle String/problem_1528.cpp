class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string final = s;
        for (int i = 0; i < indices.size(); i++) {
            final[indices[i]] = s[i];
        }
        return final;
    }
};
