Node *findIntersection(Node *first, Node *second, int k)
{
    // advance the bigger list by `k` nodes
    for (int i = 0; i < k && first; i++)
    {
        first = first->next;
    }

    // simultaneously move both lists at the same speed until they meet
    while (first && second)
    {
        // if both lists meet any node, then that node is the intersection point
        if (first == second)
        {
            return first;
        }

        // advance both lists by one node
        first = first->next;
        second = second->next;
    }

    // return null if both lists don't meet
    return nullptr;
}