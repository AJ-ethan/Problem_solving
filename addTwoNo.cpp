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
        ListNode *p=l1,*p2=l2,*head;
        long int s1=0,s2=0;
        long int a=0,b=0;
        while(p!=NULL){
            s1 = s1*10+p->val;
            p = p->next;
        }
        while(p2!=NULL){
            s2 = s2*10+p2->val;
            p2= p2->next;
        }
        while(s1){
            a = a*10+(s1%10);
        s1 = s1/10;
    }
        while(s2){
            b = b*10+(s2%10);
            s2= s2/10;
        }
        s1 = a+b;
        s2 =0;
        s2 = s1%10;
        ListNode *temp = new ListNode(s2);
        s1 = s1/10;
        head = temp;
        while(s1){
            s2 = s1%10;
            ListNode *t = new ListNode(s2);
            temp->next = t;
            temp = temp->next;
            s1 = s1/10;}
        return head;
    }
};
