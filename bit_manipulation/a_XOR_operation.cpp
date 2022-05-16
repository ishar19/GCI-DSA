// link to problem https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/strange-xor-2-fc8ad535/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)

        {

            cin >> a[i];
        }

        unordered_map<int, int> mp;

        int x = 0;

        for (int i = 0; i < n; i++)

        {

            x ^= a[i];

            mp[a[i]] = 1;
        }

        int flag = 0;

        for (int i = 0; i < n; i++)

        {

            int temp = a[i] ^ x;

            if (mp[temp] != 1)

            {

                flag = 1;

                break;
            }
        }

        if (flag)
        {

            cout << -1 << '\n';
        }

        else
        {

            cout << x << '\n';
        }
    }

    return 0;
}
