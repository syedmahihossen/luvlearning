/*
Given N strings and Q queries.
and each query you are given a string
print frequency of that string

N<=10^6
|S|<=100
Q<=10^6
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    unordered_map<string, int> mp;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string k;
        cin >> k;

        cout << mp[k] << endl;
    }
    for (auto &pr : mp)
    {
        cout << pr.first << " " << pr.second << "\n";
    }
}