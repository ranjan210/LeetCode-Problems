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
        if(head == 0 || head->next == 0){
            return head;
        }
        ListNode* prev = head;
        ListNode* temp = head->next;
        head->next = 0;
        ListNode* next;
        while(temp != 0){
            if(temp->next == 0){
                temp->next = prev;
                break;
            }
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        return temp;
    }
};