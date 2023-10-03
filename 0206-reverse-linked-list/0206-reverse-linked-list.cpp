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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = head;
        ListNode* cur = NULL;
        ListNode* nex = NULL;
        if(head != NULL)
            cur = head->next;
        if(cur != NULL)
            nex = cur->next;
        if(prev != NULL)
            prev->next = NULL;
        while(cur != NULL) {
            cout << cur->val << endl;
            cur->next = prev;
            prev = cur;
            cur = nex;
            if(nex != NULL)
                nex = nex->next;
        }
        head = prev;
        return head;
    }
};