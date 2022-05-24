void deleteNode(struct node **head, int key)
{
    struct node *temp;
    if ((*head)->data == key)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else
    {
        struct node *current = *head;
        while (current->next != NULL)
        {
            if (current->next->data == key)
            {
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                break;
            }
            else
                current = current->next;
        }
    }
}