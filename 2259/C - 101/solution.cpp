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
        vector<ll> a(n), index;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1 || a[i] == -1) index.push_back(i);
        }
        ll _max = 0, l = -1, r = -1, start = 0;
        for (ll i = 0; i < index.size(); i++)
        {
            ll r2 = index[i], l2 = index[start];
            ll temp = r2 - l2 + 1;
            if (temp > _max)
            {
                _max = temp;
                l = l2;
                r = r2;
            }
            if (a[r2] == 1) start = i;
        }
        if (l != -1 && r != -1)
        {
            a[l] = 1;
            a[r] = 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == -1) a[i] = 0;
            cout << a[i] << " ";
        }
        cout << "
";
    }
    return 0;
}