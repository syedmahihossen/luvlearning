#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a][a];
        arr[0][0] = 1;
        for (int i = 1; i < a; i++)
        {
            arr[i][1] = 1;
            arr[i][a-1] = 1;
            for (int j = 1; j < i; j++)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
}