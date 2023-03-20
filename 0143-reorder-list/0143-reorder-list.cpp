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
    
    ListNode* reverse(ListNode* head){
        
        ListNode* curr=head;
        
        ListNode* prev=NULL;
        
        ListNode* nxt=NULL;
        
        while(curr)
        {
            nxt=curr->next;
            
            curr->next=prev;
            
            prev=curr;
            curr=nxt;
            
        }
        
        return prev;
    }
    void reorderList(ListNode* head) {
        
//         finding the mid element
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            
            fast=fast->next->next;
        }
        
//         reverse the list
        
        ListNode* second=reverse(slow->next);
        
        slow->next=NULL;
        
        ListNode* first=head;
        
        
        while(second)
        {
            ListNode* temp1=first->next;
            
            ListNode* temp2=second->next;
            
            first->next=second;
            second->next=temp1;
            
            
            first=temp1;
            
            second=temp2;
            
            
            
        }
        
//         
        
    }
};