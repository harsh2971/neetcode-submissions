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
        int N=0;
        ListNode* curr=head;
        while(curr){
            N++;
            curr=curr->next;
        }
        int k=N-n;
        if(k==0){return head->next;}

        curr=head;
        while(curr && k){
            if(k==1){
                ListNode* temp=curr->next->next;
                curr->next=temp;
            }
            curr=curr->next;k--;
        }
        return head;

    }
};
