/*
 * common.h
 *
 *  Created on: 2016年5月17日
 *      Author: xuqiang
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {  }
};


#endif /* COMMON_H_ */
