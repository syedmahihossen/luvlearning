#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int arr[N];
int prefix[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int k = 1;
    long long count = 0;
    for (int i = 1; i <= pow(2, n); i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << count << "\n";
}