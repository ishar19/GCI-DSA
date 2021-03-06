bool compare_lists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    int res = 1;
    while (head1 != NULL || head2 != NULL)
    {
        if (head1 == NULL)
        {
            res = 0;
            break;
        }
        if (head2 == NULL)
        {
            res = 0;
            break;
        }
        if (head1->data != head2->data)
        {
            res = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return res;
}