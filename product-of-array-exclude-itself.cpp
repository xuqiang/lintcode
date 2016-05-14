// product-of-array-exclude-itself

class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        vector<long long> lp;
        vector<long long> rp;
        const int len = nums.size();
        lp.resize(len);
        rp.resize(len);
        lp[0] = 1;
        for(int i = 1; i < len; ++i) {
            lp[i] = lp[i - 1] * nums[i - 1];
        }
        rp[len - 1] = 1;
        for(int i = len - 2; i >= 0; --i) {
            rp[i] = nums[i + 1] * rp[i + 1]; 
        }
        vector<long long> res;
        for(int i = 0; i < len ; ++i) {
            res.push_back( (long long)( lp[i] * rp[i] ) );
        }
        return res;
    }
};