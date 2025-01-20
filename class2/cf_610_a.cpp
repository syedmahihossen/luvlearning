#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    LL n, count = 0;
    cin >> n;
    LL j = n / 2;
    for (LL i = 1; i <= n / 4; i++)
    {
        j--;
        if ((i + i + j + j) == n && i != j)
        {
            count++;
        }
    }

    cout << count << "\n";
}