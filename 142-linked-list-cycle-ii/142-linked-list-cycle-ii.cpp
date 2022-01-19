/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode *fast=head;
        ListNode *t=head;
        //vector<bool> v;
        while(fast->next !=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast == slow)
            {
                while(slow != t)
                {
                    slow=slow->next;
                    t=t->next;
                }
                return t;
            }
        }
        return NULL;
    }
};