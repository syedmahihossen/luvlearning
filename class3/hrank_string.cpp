#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n";
    string full = a;
    for (int i = 0; i < b.size(); i++)
    {
        full.push_back(b[i]);
    }
    cout << full << "\n";
    char swap = a[0];
    a[0] = b[0];
    b[0] = swap;
    cout << a << " " << b << "\n";
}