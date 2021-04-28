class Solution {
public:
    string defangIPaddr(string address) {
        string final = "";
        string brackets = "[.]";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] != '.') {
                final += address[i];
            }
            else {
                final += brackets;
            }
            
        }
        return final;
    }
};