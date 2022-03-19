#include <bits/stdc++.h>
using namespace std;

long long int series(int n)
{
    if (n < 1)
        return 0;
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    long long int x = series(n - 2);
    long long int y = series(n - 1);
    return (x * x - y);
}
void gfSeries(int N)
{
    for (long long int i = 1; i <= N; i++)
        cout << series(i) << " ";
    cout << endl;
}
