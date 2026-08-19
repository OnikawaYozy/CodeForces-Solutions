#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);
    str s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '.') cout << 0;
        else if (s[i] == '-')
        {
            if (s[i+1] == '.') cout << 1;
            else if (s[i+1] == '-') cout << 2;
            i++;
        }
    }
    return 0;
}