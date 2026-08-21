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

    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=0;
        ListNode* curr=head;
        while(curr){cnt++;curr=curr->next;}
        if(k>cnt){return head;}
        ListNode* prev=NULL;
        ListNode* temp=NULL;
        cnt=0;curr=head;
        while(curr && cnt<k){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            cnt++;
        }
        //when 1 group's reversal is complete
        //head would point to the next node
        //so we call again
        if(temp){
            head->next=reverseKGroup(temp,k);
        }
        return prev;
        

    }
};
