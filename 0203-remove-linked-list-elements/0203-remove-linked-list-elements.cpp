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
    
    
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return nullptr;
        
        auto rightSide= removeElements(head->next, val);
        if(head->val == val){
            return rightSide;
        }
        head->next = rightSide;
        return head;
    }
};