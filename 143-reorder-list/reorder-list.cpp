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
    void reorderList(ListNode* head) {
        vector<ListNode*> arr;
        while (head) {
            arr.push_back(head);
            head = head->next;
        }
        int i = 0 ;
        int j = arr.size() - 1;
        while (i < j) {
            arr[i]->next = arr[j];
            i++;
            if (i == j)
                break;
            arr[j]->next = arr[i];
            j--;
        }
        arr[i]->next = NULL;
    }
};