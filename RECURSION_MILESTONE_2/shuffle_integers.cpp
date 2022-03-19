#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void shuffleArray(int arr[], int n)
    {
        vector<int> out;
        for (int x = 0; x < n / 2; x++)
        {
            out.push_back(arr[x]);
            out.push_back(arr[n / 2 + x]);
        }
        for (int i = 0; i < n; i++)
            arr[i] = out[i];
    }
};