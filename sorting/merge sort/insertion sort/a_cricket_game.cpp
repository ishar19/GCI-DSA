// Link to the problem https : // www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/chef-and-chefa-a5c8800a/
#include <bits/stdc++.h>
        using namespace std;
void compareEnergyLevels(int arr1[], int arr2[], int n)
{
    sort(arr1, arr1 + n, greater<int>());
    sort(arr2, arr2 + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] - arr2[i] > 0)
        {
            ans = ans + (arr1[i] - arr2[i]);
        }
        else
        {
            break;
        }
    }
    cout << ans << "\n";
}
int main()
{
    int n, i;
    cin >> n;
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    compareEnergyLevels(arr1, arr2, n);
    return 0;
}