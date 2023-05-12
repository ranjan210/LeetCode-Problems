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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* head;
        ListNode* leadNode;

        if(list1 == 0 ){
            return list2;
        }

        if(list2 == 0){
            return list1;
        }

        if(temp1->val > temp2->val){
            head = temp2;
            temp2 = temp2->next;
    
        }
        else{
            head = temp1;
            temp1 = temp1->next;
        }
        leadNode = head;

        while(temp1 != 0 && temp2 != 0){
            if(temp1->val > temp2->val){
                leadNode->next = temp2;
                temp2 = temp2->next;
            }
            else{
                leadNode->next = temp1;
                temp1 = temp1->next;
            }

            leadNode = leadNode->next;
        }

        if(temp1 == 0){
            leadNode->next = temp2;
        }
        else{
            leadNode->next = temp1;
        }
        return head;
    }
};