// recover-rotated-sorted-array/
// http://www.lintcode.com/zh-cn/problem/recover-rotated-sorted-array/
// 
//

class Solution {
public:
    void swap(int& a, int& b) {
        int c = a;
        a = b;
        b = c;
    }
    void reverse(vector<int>& nums, int i, int j) {
        while(i <= j) {
            swap( nums[i++], nums[j--] );
        }
    }
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        // 寻找反转点
        int i = 0;
        int len = nums.size();
        for(; i < nums.size(); i++) {
            int left = (i - 1 + len) % len;
            int right = ( i + 1) % len;
            if( nums[i] < nums[left] && nums[i] < nums[right] ) {
                break;
            }
        }
        
        reverse( nums, 0, i - 1 );
        reverse( nums, i, nums.size() -1 );
        reverse( nums, 0, nums.size() -1 );
        return ;
        
    }
};