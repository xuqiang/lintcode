// climbing-stairs

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n <= 1) return 1;
        if(n == 2) return 2;
        else {
            int first = 1;
            int second = 2;
            for( int i = 3; i <= n; ++i ) {
                int tmp = second;
                second = second + first;
                first = tmp;
            } 
            return second;
        }
            
    }
};
