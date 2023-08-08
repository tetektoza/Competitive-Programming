class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][matrix[i].size()-1] < target) continue;

            int low = 0;
            int high = matrix[i].size() -1;
            while (low <= high) {
                int mid = low + (high-low)/2;
                if (matrix[i][mid] > target) high = mid-1;
                else if (matrix[i][mid] < target) low = mid+1;
                else return true;
            }


            break;
        }

        return false;
    }
};
