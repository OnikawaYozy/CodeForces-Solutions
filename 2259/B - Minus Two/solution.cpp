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
        ll n, count_odd = 0, count_0 = 0, count_2 = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 != 0) count_odd++;
            if (x % 4 == 0) count_0++;
            if (x % 4 == 2) count_2++;
        }
        cout << max({count_odd, count_0, count_2}) << "
";
    }
    return 0;
}