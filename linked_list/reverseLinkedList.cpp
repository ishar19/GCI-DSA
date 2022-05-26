ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;

    while (head)
    {
        ListNode *nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }

    return prev;
}