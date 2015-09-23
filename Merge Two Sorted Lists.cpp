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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        int flag=0;
        ListNode* myl1=l1;
        ListNode* myl2=l2;
        ListNode* ans=new ListNode(0);
        ListNode* now;
        
        //if(myl1!=NULL||myl2!=NULL)
        //    ans=new ListNode(0);
        now=ans;
        
        while(myl1!=NULL||myl2!=NULL)
        {
            if(myl1==NULL)
            {
                now->next=new ListNode(0);
                now=now->next;
                now->val=myl2->val;
                myl2=myl2->next;
            }
            else if(myl2==NULL)
            {
                now->next=new ListNode(0);
                now=now->next;
                now->val=myl1->val;
                myl1=myl1->next;
            }
            else if(myl1->val>myl2->val)
            {
                now->next=new ListNode(0);
                now=now->next;
                now->val=myl2->val;
                myl2=myl2->next;
            }
            else
            {
                now->next=new ListNode(0);
                now=now->next;
                now->val=myl1->val;
                myl1=myl1->next;
            }
        }
        return ans->next;
    }
};
