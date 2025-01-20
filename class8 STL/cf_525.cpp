#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto c : s)
    {
        if (c >= 'a' && c <= 'z')
            mp[c]++;
        else
        {
            if (mp[tolower(c)] > 0)
            {
                mp[tolower(c)]--;
            }
            else
                sum++;
        }
    }

    cout << sum << endl;
}