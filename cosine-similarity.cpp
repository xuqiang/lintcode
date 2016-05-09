// cosine-similarity
//
// 计算数组cos值
//

#include <iostream>
#include <vector>
#include <limits>
#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * @param A: An integer array.
     * @param B: An integer array.
     * @return: Cosine similarity.
     */
    double cosineSimilarity(vector<int> A, vector<int> B) {
		// write your code
    	const double fail_result = 2.0000;
    	if(A.size() != B.size()) return fail_result;
        double norma = 0.0;
        double normb = 0.0;
        double mul = 0.0;
        for( int i = 0; i < A.size(); ++i ) {
        	norma += A[i] * A[i];
        	normb += B[i] * B[i];
        	mul += ( A[i] * B[i] );
        }
        if( norma < numeric_limits<double>::epsilon() || normb < numeric_limits<double>::epsilon() ) {
        	return fail_result;
        } else {
        	return (mul) / (( sqrt(norma) ) * ( sqrt(normb) ));
        }
    }
};


int main(int argc, char* argv[]) {
	Solution s;
	vector<int> A = { 1, 2, 3 };
	vector<int> B = { 1, 2, 3 };
	cout << s.cosineSimilarity(A, B) << endl;
	return 0;
}
