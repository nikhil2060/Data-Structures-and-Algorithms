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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head= NULL;
        ListNode* temp=head;
        int cal=0,carry=0;
        
        while(l1!=NULL && l2!=NULL)
        {
            cal= l1->val +l2->val +carry;
            carry=cal/10;
            cal=cal%10;
            
            if(head==NULL)
            {
                ListNode* newnode= new ListNode(cal);
                head=newnode;
                temp=newnode;
            }
            else
            {
                ListNode* newnode= new ListNode(cal);
                temp->next=newnode;
                temp=newnode;
            }
            l1=l1->next;
            l2=l2->next;  
        }
        
        // return head;
        
        if(l1!=NULL && l2==NULL)
        {
            while(l1!=NULL)
            {
                cal= l1->val +carry;
                carry=cal/10;
                cal=cal%10;
                
                ListNode* newnode= new ListNode(cal);
                temp->next=newnode; 
                temp=newnode;
                l1=l1->next;
            }
        }
        else if(l1==NULL && l2!=NULL)
        {
            while(l2!=NULL)
            {
                cal= l2->val +carry;
                carry=cal/10;
                cal=cal%10;
                
                ListNode* newnode= new ListNode(cal);
                temp->next=newnode; 
                temp=newnode;
                l2=l2->next;
            }
        }
        
        if(carry!=0)
        {
            ListNode* newnode= new ListNode(carry);
            temp->next=newnode; 
        }
        
        return head;
    }
};