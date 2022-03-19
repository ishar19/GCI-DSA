
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char first,
                  char end, char middle)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, first, middle, end);
    cout << "Move disk " << n << " from rod " << first << " to rod " << end << endl;
    towerOfHanoi(n - 1, middle, end, first);
}

