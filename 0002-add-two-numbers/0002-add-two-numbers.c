/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    struct ListNode* add(struct ListNode* node1, struct ListNode* node2, int carry) {
        if(node1==NULL && node2==NULL && carry==0)
        return NULL;

        int val1,val2,sum = 0;
        if(node1==NULL) 
        val1 = 0;
        else
        val1 = node1->val;

        if(node2==NULL)
        val2 = 0;
        else
        val2 = node2->val;

        sum = (val1 + val2 + carry)%10;
        carry = (val1 + val2 + carry)/10;
        struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = sum;
        temp->next = add((node1!=NULL)?node1->next:node1,(node2!=NULL)?node2->next:node2,carry);
        return temp;
    }
    return add(l1,l2,carry);
}