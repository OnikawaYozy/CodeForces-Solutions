#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, s = 0, countt = 1, nmax = LONG_MIN;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > nmax)
        {
            if (nmax != LONG_MIN) s += nmax * countt;
            nmax = x;
            countt = 1;
        }
        else if (x == nmax) countt++;
        else s += x;
    }
    cout << nmax * (n-countt) - s;
    return 0;
}