#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << 0 << "\n";
    }
    else
        cout << 1 << "\n";
    return 0;
}