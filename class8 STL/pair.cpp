#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    pair<int, int> arr[3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    swap(arr[0], arr[2]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}

/* Input
3
5 3 10 8 4 1
*/
/* Output
4 1
10 8
5 3
*/