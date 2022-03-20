#include <bits/stdc++.h>
using namespace std;

// Prints sums of all subsets of arr[l..r]
void subsetSums(int arr[], int l, int r, int sum = 0)
{
    // Print current subset
    if (l > r)
    {
        cout << sum << " ";
        return;
    }

    // Subset including arr[l]
    subsetSums(arr, l + 1, r, sum + arr[l]);

    // Subset excluding arr[l]
    subsetSums(arr, l + 1, r, sum);
}
