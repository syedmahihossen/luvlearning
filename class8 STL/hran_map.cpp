#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, count = 0;
    cin >> q;
    map<string, int> mp;

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {

            int x;
            string s;
            cin >> s >> x;
            mp[s] += x;
        }
        else
        {
            string k;
            cin >> k;
            if (type == 3)
            {
                cout << mp[k] << "\n";
                mp[k] = 0;
            }
        }
    }

    return 0;
}
