// length-of-last-word/

class Solution {
public:
    /**
     * @param s A string
     * @return the length of last word
     */
    int lengthOfLastWord(string& s) {
        // Write your code here
        stringstream ss(s);
        string str;
        while(ss >> str) {}
        return str.size();
    }
};