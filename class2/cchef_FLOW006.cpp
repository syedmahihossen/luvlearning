#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, r = 0;
        cin >> n;
        while (n > 0)
        {
            r = n % 10;
            sum += r;
            n /= 10;
        }
        cout << sum << "\n";
    }
}