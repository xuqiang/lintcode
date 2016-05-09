#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void swap(char& a, char& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    string reverse(string& s) {
        for(int    i = 0, j = s.size() - 1; i <= j; ++i, --j) {
            swap( s[i], s[j] );
        }
        return s;
    }
    /**
     * @param a a number
     * @param b a number
     * @return the result
     */
    string addBinary(string& a, string& b) {
        // Write your code here
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        string res;
        for(; i >= 0 && j >= 0; --j, --i) {
            int tot = (a[i] - '0') + (b[j] - '0') + carry;
            res.push_back( tot % 2 + '0' );
            carry = tot / 2;
        }
        for( ; i >= 0; --i ) {
            int tot = a[i] - '0' + carry;
            res.push_back( tot % 2 + '0' );
            carry = tot / 2;
        }
        for(; j >= 0 ; --j) {
            int tot = b[j] - '0' + carry;
            res.push_back( tot % 2 + '0' );
            carry = tot / 2;
        }
        if(carry) {
            res.push_back('1');
        }
        //return res;
        return reverse(res);
    }
};


int main() {
    string a = "1010";
    string b = "1011";
    Solution s;
    cout << s.addBinary(a, b) << endl;
}
