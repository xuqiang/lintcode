// rotate-string

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void reverse( string& str, int start, int end ) {
        for(int i = start, j = end; i < j; i++, j--) {
            char ch = str[i];
            str[i] = str[j];
            str[j] = ch;
        }
    }
    void rotateString(string &str,int offset){
        //wirte your code here
        const int len = str.size();
		if(len == 0) return ;
        offset = offset % len;
        if(offset  == 0 ) return ;
        reverse(str, 0, len - offset -1 );
        reverse(str, len - offset, len - 1);
        reverse(str, 0, len - 1);
        return ;
    }
};

int main(int argc, char* argv[]) {
	Solution s;
	string str = "";
	s.rotateString(str, 10);
	cout << str  << endl;
	return 0;

}
