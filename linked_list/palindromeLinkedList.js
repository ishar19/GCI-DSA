var isPalindrome = function (head) {
    if (head === null) return true

    let current = head
    const arr = [current.val]

    while (current.next !== null) {
        current = current.next;
        arr.push(current.val)
    }

    let low = 0;
    let high = arr.length - 1;

    while (low < high) {
        if (arr[low] === arr[high]) {
            low++;
            high--;
        } else {
            return false;
        }
    }
    return true
};