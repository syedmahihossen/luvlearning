#include <bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return 'A' + (c - 'a');
}
char lower(char c)
{
    return 'a' + (c - 'A');
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
        else
            s[i] = lower(s[i]);
    }
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            result -= s[i];
        }
        else
            result += s[i];
    }
    if (result < 0)
    {
        result *= (-1);
    }

    bool flag = true;
    for (int i = 2; i < result; i++)
    {
        if (result % i == 0)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << 1 << "\n";
    }
    else
        cout << 0 << "\n";
}