// link to the problem https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/card-game-1-44e9f4e7/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;

    int B[m];

    for (int i = 0; i < m; i++)
        cin >> B[i];

    sort(B, B + m);

    long int sum = 0;

    for (int i = 0; i < n; i++)
    {

        long x = B[m - 1] + 1;

        if (x - A[i] > 0)
            sum += x - A[i];
    }

    cout << sum << endl;

    return 0;
}