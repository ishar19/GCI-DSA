// link to problem  https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/equal-elements-2-db70c1ae/

#include <iostream>

#include <climits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int even = 0;
        int odd = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] % 2) == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << min(even, odd) << endl;
    }
    return 0;
}