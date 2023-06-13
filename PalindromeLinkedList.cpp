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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        // string s = "";
        int i = 0;
        while (temp != 0){
            v.push_back(temp->val);
        //    s = s + to_string(temp->val);
            temp = temp->next;
        }

        int l = v.size();
        for(int i=0;i<l;i++){
            if(v[i] != v[l-1-i]){
                return false;
            }
        }
        return true;
    }
};