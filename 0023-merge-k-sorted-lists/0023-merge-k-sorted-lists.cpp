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
    ListNode* merge2lists(ListNode* p1, ListNode* p2) {
        if(p1 == NULL) 
            return p2;
        if(p2 == NULL)
            return p1;
        
        ListNode *prev = p1;
        ListNode *merged = NULL;
        while(p1 && p2) {
            if(p1->val <= p2->val) {
                if(!merged)
                    merged = p1;
                else
                    prev->next = p1;
                prev = p1;
                p1 = p1->next;
            }
            else {
                if(!merged)
                    merged = p2;
                else
                    prev->next = p2;
                prev = p2;
                p2 = p2->next;
            }
        }
        
        if(p1) prev->next = p1;
        if(p2) prev->next = p2;
        
        return merged;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = NULL;
        for(int i = 0;i < lists.size();i++) {
            head = merge2lists(head, lists[i]);
        }
        return head;
    }
};