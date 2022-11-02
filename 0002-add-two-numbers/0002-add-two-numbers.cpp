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
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        int carry = 0;
        
        while(h1 && h2){
            int temp = (h1->val + h2->val + carry);
            if(temp > 9)
                carry = 1;
            else 
                carry = 0;
            h1->val = temp%10;
            h2->val = temp%10;
            
            if(!h1->next && !h2->next && carry==1){         //to handle the cases like 5+5=10
                ListNode* node = new ListNode;
                node->val = carry;
                h1->next = node;
                h1 = h1->next;
            }
            
            h1 = h1->next;
            h2 = h2->next;
        }
        
        if(h1){                                             //if first list is of bigger size
            while(h1){
                int temp = (h1->val + carry);
                if(temp > 9)
                    carry = 1;
                else 
                    carry = 0;
                h1->val = temp%10;
  
                if(!h1->next && (carry == 1)){
                    ListNode* node = new ListNode;
                    node->val = 1;
                    h1->next = node;
                    node->next = NULL;
                    carry = 0;
                }
                h1 = h1->next;
            }
            return l1;
        }
        
        if(h2){                                             //if second list is of bigger size  
            while(h2){
                int temp = (h2->val + carry);
                if(temp > 9)
                    carry = 1;
                else 
                    carry = 0;
                h2->val = temp%10;

                if(!h2->next && (carry == 1)){
                        ListNode* node  = new ListNode;
                        node->val = 1;
                        h2->next = node;
                        node->next = NULL;
                        carry = 0;
                }
                
                h2 = h2->next;
            }
            return l2;
        }
        return l1;
    }
};