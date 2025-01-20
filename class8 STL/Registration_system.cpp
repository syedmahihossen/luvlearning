#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << "\n";
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s + to_string(mp[s])]++;
            mp[s]++;
        }
    }
}
