/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        struct ListNode* pseudo = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* node = pseudo;
        int s = 0;
        
        while(l1 || l2) {
            s = ((l1 != nullptr) ? l1->val : 0) + ((l2 != nullptr) ? l2->val : 0) + carry;
            carry = s / 10;
            struct ListNode* temp = new ListNode(s % 10);
            node->next = temp;
            node = node->next;
            l1 = (l1) ? l1->next : nullptr;
            l2 = (l2) ? l2->next : nullptr;
        }
        
        if(carry == 1) {
            struct ListNode* temp = new ListNode(1);
            node->next = temp;
        }
        
        return pseudo->next;
    }
};