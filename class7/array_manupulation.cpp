#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
long long arr[N];
long long prefix[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;

        arr[a] += k;
        arr[b + 1] -= k;
    }
    long long maxi = -1;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = arr[i] + prefix[i - 1];
    }

    for (int i = 0; i <= n; i++)
    {
        maxi = max(maxi, prefix[i]);
    }
    cout << maxi << "\n";
}