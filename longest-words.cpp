// 最长单词
// 
// http://www.lintcode.com/zh-cn/problem/longest-words/
// 

http://www.lintcode.com/zh-cn/problem/longest-words/


class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> res;
        int len = 0;
        for(auto& word : dictionary) {
            if(word.size() > len) {
                len = word.size();
            }
        }
        for(auto& word : dictionary) {
            if(len == word.size()) {
                res.push_back(word);
            }
        }
        return res;
    }
};