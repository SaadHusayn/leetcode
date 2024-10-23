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
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto prev = head;
        auto curr = head->next;
        
        while(curr!=nullptr){
            auto pData = prev->val;
            auto cData = curr->val;
            auto gData = (pData>cData)?gcd(pData, cData):gcd(cData,pData);
            prev->next = new ListNode(gData);
            prev->next->next = curr;
            prev = curr;
            curr = curr->next;
        }
        
        return head;
    }
};