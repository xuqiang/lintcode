// reverse-words-in-a-string/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * @param s : A string
     * @return : A string
     */
    string join(vector<string> strs) {
        string res;
        for(int i = 0; i < strs.size(); ++i) {
            res += strs[i];
            if(i != strs.size() - 1) {
                res += " ";
            }
        }
        return res;
    }
    string reverseWords(string s) {
        if(s.size() <= 0) return "";
        // write your code here
        stringstream ss(s);
        string word;
        vector<string> strs;
        while(ss >> word) {
            strs.push_back( word );
        }
        std::reverse( strs.begin(), strs.end() );
        return join(strs);
    }
};

int main(int argc, char* argv[]) {
	Solution s;
	string str = "the sky is blue";
	cout << s.reverseWords(str) << endl;

	return 0;
}