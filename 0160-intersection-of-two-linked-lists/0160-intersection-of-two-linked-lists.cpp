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
        int a = 0, b = 0;
        ListNode* temp1 = headA, *temp2 = headB;
        while(temp1){
            a++;
            temp1 = temp1->next;
        }
        while(temp2){
            b++;
            temp2 = temp2->next;
        }

        temp1 = headA; temp2 = headB;

        if(a < b){
            while(a != b){
                temp2 = temp2->next;
                b--;
            }
        }
        else{
            while(a != b){
                temp1 = temp1->next;
                a--;
            }
        }

        while(temp1 && temp2){
            if(temp1 == temp2) return temp2;
            temp1 = temp1->next;
            temp2 = temp2->next;

        }
        return nullptr;
    }
};