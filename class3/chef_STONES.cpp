#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(const string &str)
{
    unordered_set<char> seen;
    string result;

    for (char ch : str)
    {
        if (seen.find(ch) == seen.end())
        {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string j, s;
        cin >> j >> s;
        string jdup = removeDuplicates(j);
        int countt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int k = 0; k < jdup.size(); k++)
            {
                if (jdup[k] == s[i])
                {
                    countt++;
                }
            }
        }
        cout << countt << "\n";
    }
}