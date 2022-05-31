var removeNthFromEnd = function (head, n) {

    let tempHead = head;
    let listLength = 0;
    while (tempHead) {
        listLength++;
        tempHead = tempHead.next;
    }

    if (listLength - n - 1 < 0) {
        return head.next;
    }

    let newList = head;
    for (let i = 0; i < listLength; i++) {
        if (i === listLength - n - 1) {
            head.next = head.next.next;
        } else {
            head = head.next;
        }
    }

    return newList;
};