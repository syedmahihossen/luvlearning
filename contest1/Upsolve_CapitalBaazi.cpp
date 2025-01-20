#include <bits/stdc++.h>
using namespace std;
char upper(char c){
    return 'A'+(c-'a');
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=upper(s[i]);
        }
        cout<<s<<"\n";
    }
}