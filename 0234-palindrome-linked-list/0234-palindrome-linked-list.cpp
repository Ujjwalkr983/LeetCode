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
        ListNode* back = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = back;
            back = temp;
            temp = front;
        }
        return back;
    }


    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next && fast->next->next){
            slow= slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseList(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second){
            if(first->val != second->val){
                reverseList(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }


        reverseList(newHead);
        return true;
    }
};