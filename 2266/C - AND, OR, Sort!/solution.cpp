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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        string p = s;
        sort(p.begin(), p.end());
        ll z = count(s.begin(), s.end(), '0');
        if (p == s) cout << "0
";
        else if (s[0] == '1') cout << z << "
";
        else
        {
            ll o = 0, nmin = LONG_MAX;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '1') o++;
                else z--;
                nmin = min(nmin, o + z);
            }
            cout << nmin << "
";
        }
    }
    return 0;
}