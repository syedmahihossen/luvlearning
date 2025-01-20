#include <bits/stdc++.h>
using namespace std;
int sum(int a[], int n)
{
    
    if (n == a[0])
    {
        return a[0];
    }
    return sum(a, n - 1) + n;
}
int main()
{
    int a, n;
    cin >> a >> n;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, n) << "\n";
}