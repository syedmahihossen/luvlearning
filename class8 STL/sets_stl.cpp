#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    set<int> num;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            num.insert(y);
        }
        else if (x == 2)
        {
            auto it = num.find(y);
            if (it != num.end())
            {
                num.erase(y);
            }
        }

        else if (x == 3)
        {
            auto it = num.find(y);
            if (it != num.end())
            {
                cout << "Yes" << "\n";
            }
            else
                cout << "No" << "\n";
        }
    }
}