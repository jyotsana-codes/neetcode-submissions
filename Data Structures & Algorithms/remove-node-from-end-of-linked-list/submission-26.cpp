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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        //cout<<"count"<<count;
        if(n==count)
        {
            ListNode* newhead=head->next;  
            delete head;
            return newhead;  
        }
        temp=head;
        int res=(count-n);
        while(temp!=NULL)
        {
            res--;
            if(res==0)
                break;
            temp=temp->next;
        }
            ListNode* deleteNode=temp->next;
            cout<<"node"<<deleteNode->val;
            temp->next=temp->next->next;
            delete deleteNode;
            return head;*/
        ListNode* temp=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        if(temp->next==NULL )
            return NULL; 

         // move fast n+1 steps ahead
        for(int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if(fast==NULL) return head->next;

        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* deleteN=slow->next;
        slow->next = slow->next->next;
        delete deleteN;

        return head;
       
   

        /*ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // move fast n+1 steps ahead
        for(int i = 0; i <= n; i++)
        {
            fast = fast->next;
        }

        // move both pointers
        while(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* deleteN=slow->next;
        slow->next = slow->next->next;
        delete deleteN;

        return dummy->next;*/
    }
};
    
