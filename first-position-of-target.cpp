// first-position-of-target
// 二分查找变种

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &vec, int target) {
        // write your code here
        int i = 0;
        int j = vec.size() - 1;
        while( i < j) {
            int mid = i + (j - i) / 2;
            int pivot = vec[mid];
            if(pivot < target) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        if(vec[i] == target) return i;
        else  return -1;
    }
};