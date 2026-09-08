#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count_0 = 0;
        bool i1 = false, i2 = false;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i == 0 && x == 0) i1 = true;
            if (i == n - 1 && x == 0) i2 = true;
            if (x == 0) count_0++;
        }
        if (count_0 < 2) cout << -1;
        else if (i1 && i2) cout << 0;
        else if (i1 || i2) cout << 1;
        else cout << 2;
        cout << "
";
    }
}