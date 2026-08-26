struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* l3 = NULL;
    struct ListNode* head = NULL;
    struct ListNode* temp = NULL;

    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if (l1 != NULL) {
            sum = sum + l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum = sum + l2->val;
            l2 = l2->next;
        }
        l3 = malloc(sizeof(struct ListNode));
        l3->val = sum % 10;
        l3->next = NULL;

        if (head == NULL) {
            head = l3;
        } 
        else {
            temp->next = l3;
        }
        temp = l3;
        carry = sum / 10;
    }
    return head;
}