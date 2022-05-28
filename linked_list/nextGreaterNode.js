var nextLargerNodes = function (head) {
    let stack = [];
    let ans = [];
    let i = 0;
    while (head) {
        while (stack.length && head.val > stack[stack.length - 1][0]) {
            let idx = stack.pop()[1]
            ans[idx] = head.val;
        }
        stack.push([head.val, i])
        i++;
        head = head.next;
    }
    while (stack.length) {
        ans[stack.pop()[1]] = 0;
    }
    return ans;
};