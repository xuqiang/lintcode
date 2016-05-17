// singleton


class Solution {
public:
    /**
     * @return: The same instance of this class every time
     */
    static Solution* s;
    static Solution* getInstance() {
        static Solution* inst = new Solution();
        return inst;
    }
    
    Solution( const Solution& ) = delete;
    Solution& operator=(const Solution) = delete;
    
    
private:
    Solution() {}
    ~Solution() {}
};