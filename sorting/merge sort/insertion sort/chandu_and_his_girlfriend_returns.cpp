// link to the question https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/chandu-and-his-girlfriend-returns/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
vector<int> v;
int n, m;
cin >> n >> m;
for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    v.push_back(x);
}
for (int i = 0; i < m; i++)
{
    int x;
    cin >> x;
    v.push_back(x);
}
sort(v.rbegin(), v.rend());
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;
    }
    return 0;
}