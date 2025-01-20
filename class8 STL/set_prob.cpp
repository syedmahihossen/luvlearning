/*
Given N strings, print unique strings
in lexiographical order
N<=10^5
|S|<=100000
*/

#include <bits/stdc++.h>
using namespace std;
void print(set<string> s)
{
    for (auto it : s)
    {
        cout << it << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        s.insert(p);
    }
    print(s);
}