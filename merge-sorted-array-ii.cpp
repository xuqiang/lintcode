// merge-sorted-array-ii/
// 
// http://www.lintcode.com/zh-cn/problem/merge-sorted-array-ii/


class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> res;
        int i = 0; int j = 0;
        while( i < A.size() && j < B.size() ) {
            if(A[i] > B[j]) {
                res.push_back( B[j] );
                j++;
            } else if( A[i] < B[j] ) {
                res.push_back( A[i] );
                i++;
            } else {
                res.push_back( A[i] );
                res.push_back( B[j] );
                i++; j++;
            }
        }
        
        while(i < A.size()) {
            res.push_back(A[i++]);
        }
        while(j < B.size()) {
            res.push_back( B[j++] );
        }
        
        return res;
        
    }
};