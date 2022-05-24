#include <bits stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int value)
    {
        val = value;
        next = NULL;
    }
};
void push_front(Node **head, int new_val)
{
    Node *new_node = new Node(new_val);
    new_node->next = *head;
    *head = new_node;
}
void printList(Node *head)
{
    Node *i = head;
    while (i)
    {
        cout << i->val << " ";
        i = i->next;
    }
    cout << "\n";
}
// recusrive function to print
// linked list in reverse order
void printReverse(Node *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->val << " ";
}
