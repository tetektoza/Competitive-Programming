class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size()-1;
        int mid;
        while (l <= r) {
            mid = l + (r - l)/2;
            

            if (nums[mid] == target) {
                return mid;
            } else if (nums[l] == target) {
                return l;
            } else if (nums[r] == target) {
                return r;
            }

            if (nums[l] <= nums[mid]) {
                if (target > nums[l] && target < nums[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target < nums[r]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }

        return -1;
    }


};
