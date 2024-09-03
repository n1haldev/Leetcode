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
    struct ListNode* add(ListNode* node1, ListNode* node2, int carry) {
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
            
            struct ListNode* temp = new ListNode(sum);
            temp->next = add((node1!=NULL)?node1->next:node1,(node2!=NULL)?node2->next:node2,carry);
            return temp;
        }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        
        return add(l1,l2,carry);
    }
};