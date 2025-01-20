#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (rev == s)
    {
        cout << "YES" << "\n";
    }
    else
        cout << "NO" << "\n";
}
