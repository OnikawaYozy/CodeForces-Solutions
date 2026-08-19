#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[n / 2];
    return 0;
}