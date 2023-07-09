//Leetcode 19

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start =new ListNode();
        start->next=head;
        ListNode* slow=start;
        ListNode* fast=start;
        int count=0;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next = slow->next->next;
        return start->next;
    }
};