class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels = 0;
        for (int i = 0; i < J.length(); i++) {
            for (int j = 0; j < S.length(); j++) {
                if (J[i] == S[j]) {
                    jewels++;
                }
            }
        }
        return jewels;
    }
};