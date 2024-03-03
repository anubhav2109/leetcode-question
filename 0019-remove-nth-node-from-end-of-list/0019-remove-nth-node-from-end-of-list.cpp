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
        ListNode* fast = head;
        ListNode* slow = head;
        
        // Move the fast pointer n positions ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // Handle the case when the first element is to be removed
        if (fast == NULL) {
            ListNode* newHead=head->next;
            delete head; //avoid of memory leaks
            return newHead;
        }
        
        // Move both pointers until the fast pointer reaches the end
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from the end
        ListNode *node= slow->next;
        slow->next = slow->next->next;
        delete node;//avoid of memory leaks
        
        return head;
    }
};
