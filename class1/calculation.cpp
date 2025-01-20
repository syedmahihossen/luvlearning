#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a = 100000;
    double b = 100000;
    double c = a * b;
    cout << fixed << setprecision(0) << c << endl;
    // fixed means scientific to real number
    // setprecision() remove value after points
    
    long long int k = a * b;
    cout << k << endl;
    // we use type casting for handle this setuation 
    //(int) or for long long something * 1LL;
}