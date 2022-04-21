// link to question https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/median-game-june-easy-19-3722be60/

#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin >> t;
while (t--)
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    cout << A[0] + A[n - 1] << endl;
}
return 0;
}