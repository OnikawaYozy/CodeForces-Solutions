#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll p = a[k-1], countt = 0;
    for (ll i = 0; i < n; i++) if (a[i] > 0 && a[i] >= p) countt++;
    cout << countt;
    return 0;
}