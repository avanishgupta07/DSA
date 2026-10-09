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
     int count =0;
     ListNode* temp=head;
     while(temp!=NULL){
        count++;
        temp=temp->next;
     }
    int  res=count-n;
     if(res==0){
        ListNode* del=head;
        head=head->next;
        delete del;
        return head;
     }
     temp=head;
     for(int i=0;i<res-1;i++){
        temp=temp->next;
     }
     ListNode* del=temp->next;
     temp->next=del->next;
     delete del;
     return head;
    }
};