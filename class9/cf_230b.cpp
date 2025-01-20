#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> v[i];
        int lo = 0, hi = v[i], mid;
        while (hi - lo > 1)
        {
            int mid = lo + (hi - lo) / 2;
            if (v[i] % mid == 0)
            {
                count++;
            }
        }
    }
}