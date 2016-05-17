/*
 * hash-function.cpp
 *
 *  Created on: 2016年5月17日
 *      Author: xuqiang
 */


#include <string>
#inlcude <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
    int hashCode(string key,int HASH_SIZE) {
        // write your code here
        long long value = 0;
        for(const auto& c : key) {
            value = value * 33L % HASH_SIZE;
            value = (value + static_cast<const long long>(c) % HASH_SIZE) % HASH_SIZE;
        }
        return static_cast<int>(value);
    }
};


int main(int argc, char* argv[]) {
	return 0;
}
