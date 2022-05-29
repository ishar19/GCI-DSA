var oddEvenList = function (head) {
    if (!head) return head;
    let ptr1 = head;
    let ptr2 = ptr1.next;
    let newHead = ptr2;
    while (ptr1 && ptr2 && ptr1.next && ptr2.next) {
        ptr1.next = ptr1.next.next;
        ptr2.next = ptr2.next.next;
        ptr1 = ptr1.next;
        ptr2 = ptr2.next;
    }
    ptr1.next = newHead;
    return head;
};