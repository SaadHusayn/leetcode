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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // agar list1 khaali hai tu list2 return krdo
        if(list1 == nullptr){
            return list2;
        }
        
        // agar list2 khaali hai tu list1 return krdo
        if(list2 == nullptr){
            return list1;
        }
        
        
        ListNode *resultList = new ListNode();
        ListNode *tmp = resultList;//tmp pointer list append krne k kaam ayega
        
        //setting up first node of the list takay ham loop ma tmp->next hi chalayen
        if(list1->val <= list2->val){
            tmp->val = list1->val;
            list1 = list1->next; //list1 pointer ko agay krdo
        }else{
            tmp->val = list2->val;
            list2 = list2->next; //list1 pointer ko agay krdo
        }
        
        //jab tak dono lists end nhi hojatein, loop chalao
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val <= list2->val){
                tmp->next = list1;
                list1 = list1->next;
            }else{
                tmp->next = list2;
                list2 = list2->next;
            }
            
            tmp=tmp->next;
            
            for(auto i=resultList;i!=nullptr;i=i->next) cout<<i->val<<" ";
            cout<<endl;
        }
        
        //kya pata shayad aik hi list end hui ho
        if(list1 != nullptr){
            tmp->next = list1;
        }else if(list2 != nullptr){
            tmp->next = list2;
        }
        
        return resultList;
    }
};