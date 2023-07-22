//Q1:LEETCODE 876: Middle Of LinkedList
//Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      //take 2 pointers slow and fast
      //move slow by 1 step
      //move fast by 2 steps
      //when fast reaches end slow would be at the middle

      if(head==NULL or head->next==NULL) return head;

      ListNode* slow=head;
      ListNode* fast=head;

      while(fast!=NULL and fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
      }
      return slow;//points the middle
    }
};