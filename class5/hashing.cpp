/*
Given array a of n integers Given Q queries and each query give a
number X, print count of that number in array

constrains
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hsh[x] << "\n";
    }
}