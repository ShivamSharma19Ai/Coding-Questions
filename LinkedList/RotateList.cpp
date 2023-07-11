//Leetcode 61

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
    //calculating length
    ListNode* temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
      temp->next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last ListNode link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
    return head;
    }
};
