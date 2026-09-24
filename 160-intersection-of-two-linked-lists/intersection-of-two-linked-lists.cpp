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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){
            return nullptr;
        }
        ListNode* A1=headA;
        ListNode* B1=headB;
        while(A1!=B1){
            A1=(A1==nullptr)?headB:A1->next;
            B1=(B1==nullptr)?headA:B1->next;
        }
        return B1;
        
    }
};