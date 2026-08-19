#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<ll>());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= k)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}