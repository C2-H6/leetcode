struct ListNode* fillList(struct ListNode *nNode, int nbr)
{
    struct ListNode *tmp = malloc(sizeof(struct ListNode));
    tmp->val = nbr;
    tmp->next = NULL;
    return tmp;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    struct ListNode *newNode = dummy;

    int carry = 0;
    int sum = 0;

    while (l1 || l2 || carry) {
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;

        newNode->next = fillList(newNode->next, sum % 10);
        newNode = newNode->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    newNode = dummy->next;
    free(dummy);
    return newNode;
}
