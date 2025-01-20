/*
Given N strings, print unique strings in lexiographical order
with their frequency
n<=10^5
|S|<=100
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (auto pr : mp)
    {
        cout << pr.first << " " << pr.second << "\n";
    }
}

/*
input
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

output
abc 3
def 1
ghj 3
jkl 1

*/