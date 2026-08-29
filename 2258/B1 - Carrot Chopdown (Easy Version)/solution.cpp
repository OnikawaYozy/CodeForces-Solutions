#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
ll n, m;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll a[n], b[m + 1] = {0}, c[m + 1] = {0}, sum = 0, nmax = 0;
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) b[a[i]]++;
        for (ll i = m; i >= 1; i--)
        {
            sum += b[i];
            c[i] = sum;
        }
        for (ll i = 1; i <= m; i++)
        {
            ll temp = c[i];
            if (i * 2 <= m) temp += b[i * 2];
            nmax = max(nmax, temp);
        }
        cout << nmax << "
";
    }
}