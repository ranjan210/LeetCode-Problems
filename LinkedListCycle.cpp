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
    bool hasCycle(ListNode *head) {
        ListNode* p1;
        ListNode* p2;
        p1 = head;
        p2 = head;
        if(head == 0){
            return false;
        }
        while(p1->next != 0 && p2->next != 0){
            p1 = p1->next;
            if(p1==p2){
                return true;
            }
            if(p1->next == 0){
                return false;
            }
            p1 = p1->next;
            if(p1==p2){
                return true;
            }
            p2 = p2->next;
        }
        return false;
    }
};