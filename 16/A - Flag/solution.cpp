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
    ll n, k;
    str p;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        str s;
        cin >> s;
        if (i > 0 && p == s)
        {
            cout << "NO
";
            return 0;
        }
        else
        {
            char o;
            for (ll j = 0; j < k; j++)
            {
                if (j > 0 && o != s[j])
                {
                    cout << "NO
";
                    return 0;
                }
                o = s[j];
            }
        }
        p = s;
    }
    cout << "YES
";
    return 0;
}