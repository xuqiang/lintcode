// fibonacci
class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if(n <= 1) return 0;
        else if(n == 2) return 1;
        else {
           int first = 0;
           int second = 1;
           for(int i = 3; i <= n; ++i) {
               int tmp = second;
               second += first;
               first  = tmp;
           }
           return second;
        }
        
    }
};
