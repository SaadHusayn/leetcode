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
    ListNode* deleteDuplicates(ListNode* head) {
        
        //agar list khaali hai ya sirf aik hi element hai tu phir list hi return krdo
        if(head == nullptr || head->next==nullptr) return head;
        
        for(auto peecheWala = head, aagayWala = head->next; aagayWala!=nullptr; aagayWala = aagayWala->next){
            //agar dono same hain tu 
            if(peecheWala->val == aagayWala->val){
                peecheWala->next = aagayWala->next; //peechewala ka agla aagla, aagaywaal ka agla banado
            }else{
                //warna peeche wala ko bhi aagay barhado
                peecheWala = peecheWala->next;
            }
        }
        return head;
        
        
    }
};