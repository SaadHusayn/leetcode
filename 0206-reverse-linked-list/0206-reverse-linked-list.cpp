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
    void reverseListRecursion(ListNode *&head, ListNode *curr, ListNode *prev){
        if(curr == nullptr){
            head = prev;
            return;
        }
        
        auto forward =  curr->next;
        curr->next = prev;
        reverseListRecursion(head, forward, curr);
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = 0;
        auto curr = head;
        
        reverseListRecursion(head, curr, prev);
        
        return head;
    }
};