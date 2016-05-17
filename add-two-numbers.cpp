/*
 * add-two-numbers.cpp
 *
 *  Created on: 2016年5月17日
 *      Author: xuqiang
 */


#include "common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;
        while(l1 && l2) {
            int tot = ( carry + l1->val + l2->val );
            ListNode* n = new ListNode( tot % 10 );
            tail->next = n;
            tail = n;
            carry = tot / 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1) {
            int tot = (carry + l1->val);
            ListNode* n = new ListNode( tot % 10 );
            carry = tot / 10;
            tail->next = n;
            tail = n;
            l1 = l1->next;
        }
        while(l2) {
            int tot = (carry + l2->val);
            ListNode* n = new ListNode( tot % 10 );
            carry = tot / 10;
            tail -> next = n;
            tail = n;
            l2 = l2->next;
        }
        if(carry) {
            ListNode* n = new ListNode( carry );
            tail->next = n;
        }
        return dummy.next;
    }
};


int main() {
	return 0;
}
