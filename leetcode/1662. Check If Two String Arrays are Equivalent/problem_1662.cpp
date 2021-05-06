class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string output1 = "";
        string output2 = "";
        for (int i = 0; i < word1.size(); i++) {
            output1 += word1[i];
        }

        for (int i = 0; i < word2.size(); i++) {
            output2 += word2[i];
        }

        if (output1 == output2) {
            return true;
        }
        else {
            return false;
        }
    }
};