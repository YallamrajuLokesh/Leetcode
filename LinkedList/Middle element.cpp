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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        int x;
        ListNode* temp=head;
        
            while(temp!=NULL){
            temp=temp->next;
                count++;
            }
        ListNode* t=head;
        // if(count%2==0){
        //     x=(count/2)+1;
        // }
        // else{
            x=count/2;
        
        int j=0;
        while(j<x){
            t=t->next;
            
            j++;
        }
        return t;
    }
};
