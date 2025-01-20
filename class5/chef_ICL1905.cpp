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
        long long n, a, sumd = 0, sumc = 0;
        cin >> n >> a;
        vector<long long> arrc(n);
        vector<long long> arrd(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arrd[i] >> arrc[i];
            sumd += arrd[i];
            sumc += arrc[i];
        }

        for (int i = 0; i < n; i++)
        {
        }

        long long total = sumd - sumc;
        if (total < 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << total * a << "\n";
        }
    }

    return 0;
}
