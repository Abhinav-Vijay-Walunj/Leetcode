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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* ans=reverseList(head->next);
        ListNode* headnext=head->next;
        head->next->next=head;
        
        head->next=NULL;
        
        return ans;
    }
        
        /*
        ListNode* curr=head;
        ListNode* prev=NULL;
        
        while( curr != NULL)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr = temp;
        }
        return prev;
        
    }
    
        */
        
    
};