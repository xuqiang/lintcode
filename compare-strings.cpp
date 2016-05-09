// compare-strings/


class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        if(A.size() <= 0 && B.size() > 0) return false;
        if(B.size() <= 0 && A.size() > 0) return true;
        if(A.size() <= 0 && B.size() <= 0) return true;
        
        // 字符个数限制
        unordered_map<char, int> hmap;
        for(auto& ch : A) {
            if(hmap.find(ch) == hmap.end()) hmap[ch] = 0;
            hmap[ch] ++;
        }
        
        for(auto& ch : B) {
            if(hmap.find(ch) == hmap.end()) return false;
            if(--hmap[ch] < 0) return false;
        }
        return true;
    }
};
