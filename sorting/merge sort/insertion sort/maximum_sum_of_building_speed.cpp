// link to question https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/maximum-sum-of-building-speed-00ab8996/

#include <bits/stdc++.h>
using namespace std;
int a[301];
int main()
{
int n, m;
cin >> m;
n = m * 2;
for (int i = 1; i <= n; i++)
{
    cin >> a[i];
}
sort(a + 1, a + n + 1);
int ans = 0;
for (int i = 1; i <= n; i += 2)
{
    ans += min(a[i], a[i + 1]);
}
cout << ans;
return 0;
}
