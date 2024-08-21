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
        int size = 0;
        ListNode* cur = head;

        while(cur) {
            size++;
            cur = cur->next;
        }

        n = n % size;
        
        if(n == 0)
            return head->next;

        cur = head;
        int count = 0;
        ListNode *prev = nullptr;

        while(cur) {
            if(count == size - n) {
                if(prev && cur) {
                    prev->next = cur->next;
                    return head;
                }
                return head;
            }
            count++;
            prev = cur;
            cur = cur->next;
        }

        return head;
    }
};