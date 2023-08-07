class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        std::stack<std::pair<int, int>> st;

        vector<int> res(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++) {
            
            if (i == 0) {
                st.push(std::make_pair(i, temperatures[i]));
                continue;
            }

            std::pair<int,int> top = st.top();
            while (temperatures[i] > top.second) {
                st.pop();
                res[top.first] = i-top.first;
                if (st.empty()) break;
                top = st.top();
            }

            st.push(std::make_pair(i, temperatures[i]));
        }

        return res;
    }
};
