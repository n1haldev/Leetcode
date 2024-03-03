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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int len = 0;
        while(cur != NULL) {
            len++;
            cur = cur->next;
        }
        
        if(len == 0)
            return NULL;
        
        int ind = len - (n%len) - 1;
        cur = head;
        ListNode* prev = NULL;
        
        while(cur != NULL && ind >= 0) {
            prev = cur;
            cur = cur->next;
            ind--;
        }
        
        if(cur != NULL) {
            prev->next = cur->next;
            delete(cur);
            return head;
        }
        if(prev != NULL && cur == NULL) {
            ListNode* temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        return NULL;
    }
};