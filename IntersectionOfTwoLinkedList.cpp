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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int m = 1;
        int n = 1;
        while(temp1->next != 0){
            m++;
            temp1 = temp1->next;
        }
        while(temp2->next != 0){
            temp2 = temp2->next;
            n++;
        }
        if(temp1 != temp2){
            return 0;
        }
        temp1 = headA;
        temp2 = headB;
        if(m>n){
            for(int i=0;i<m-n;i++){
                temp1 = temp1->next;
            }
        }
        else{
            for(int i=0;i<n-m;i++){
                temp2 = temp2->next;
            }
        }
        while(temp1!=temp2 && temp1->next != 0 && temp2->next != 0){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;

    }
};