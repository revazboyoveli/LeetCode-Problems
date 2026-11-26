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
        int len = 0;
        ListNode* curr = head;

        while(curr){
            len++;
            curr = curr->next;
        }

        int stepsBefore = len - n;
        ListNode dummy(0, head);
        curr = &dummy;

        for(int i = 0; i < stepsBefore; i++){
            curr = curr->next;
        }

        ListNode* toDel = curr->next;
        curr->next = toDel->next;
        delete toDel;

        return dummy.next;
    }
};