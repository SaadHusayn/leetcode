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
    void helper(ListNode* head, int val){
        if(head == nullptr) return;
        if(head->val!=val && head->next==nullptr) return;
        
        if(head->next->val == val){
            head->next = head->next->next;
            helper(head, val);
        }else{
            helper(head->next, val);
        }
        
    }
    
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val == val) head=head->next;
        helper(head, val);
        return head;
    }
};