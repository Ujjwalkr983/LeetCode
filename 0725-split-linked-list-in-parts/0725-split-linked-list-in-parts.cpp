class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        int a = count / k;
        int b = count % k;

        vector<ListNode*> result(k, nullptr);
        ListNode* curr = head;
        for (int i = 0; i < k && curr != nullptr; i++) {
            result[i] = curr;
            int c = a + (i < b ? 1 : 0);

            for (int j = 1; j < c; j++) {
                if (curr) {
                    curr = curr->next;
                }
            }

            if (curr) {
                ListNode* nextPart = curr->next;
                curr->next = nullptr;
                curr= nextPart;
            }
        }

        return result;
    }
};
