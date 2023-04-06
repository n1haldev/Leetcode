/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* listing(struct ListNode* cur1, struct ListNode* cur2) {
        struct ListNode* temp=malloc(sizeof(struct ListNode));
        if(cur1==NULL && cur2==NULL) {
            return NULL;
        }
        if(cur1==NULL) {
            temp->val=cur2->val;
            cur2=cur2->next;
        }
        else if(cur2==NULL) {
            temp->val=cur1->val;
            cur1=cur1->next;
        }
        else {
            if(cur1->val>cur2->val) {
                temp->val=cur2->val;
                cur2=cur2->next;
            }
            else {
                temp->val=cur1->val;
                cur1=cur1->next;
            }
        }
        temp->next=listing(cur1,cur2);
        return temp;
    }
    return listing(list1, list2);
}