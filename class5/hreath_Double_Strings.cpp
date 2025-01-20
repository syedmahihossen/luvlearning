#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    char arr[26] = {};
    for (int i = 0; i < s.size(); i++)
    {
        int store = s[i] - 'a';
        arr[store]++;
        if (arr[store] > 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            cout << "Yes" << "\n";
        }
        else
            cout << "No" << "\n";
    }
}