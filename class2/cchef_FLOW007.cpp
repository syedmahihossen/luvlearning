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
        string n, k;
        cin >> n;
        reverse(n.begin(), n.end());
        cout << stoi(n) << "\n";
        // Convert the reversed string back to an integer using stoi() to remove any leading zeros.
    }
}