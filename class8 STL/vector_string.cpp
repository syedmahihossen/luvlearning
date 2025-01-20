#include <bits/stdc++.h>
using namespace std;

void vectorprint(vector<string> &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << "\n";
}
int main()
{
    vector<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        s.push_back(k);
    }
    vectorprint(s);
}