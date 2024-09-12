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
    ListNode *reverseList(ListNode *head){
    if(head==nullptr || head->next==nullptr) return head;

    auto remainingList = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return remainingList;
}

ListNode *getRightSideList(ListNode *head){
    auto singleStepper = head;
    auto doubleStepper = head;


    while(doubleStepper->next!=nullptr && doubleStepper->next->next!=nullptr){
        singleStepper = singleStepper->next;
        doubleStepper = doubleStepper->next->next;
    }

    return singleStepper->next;

}
    
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;

    auto rightList = getRightSideList(head);
    auto reversedRightList = reverseList(rightList);


    auto i = head;
    auto j = reversedRightList;
    for(;j!=nullptr;i=i->next, j=j->next){
        if(i->val != j->val) return false;
    }

    return true;
    }
};