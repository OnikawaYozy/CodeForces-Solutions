#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, countt = 1, nmax = LONG_MIN;
    cin >> n;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0) temp = x;
        else
        {
            if (temp < x) countt++;
            else
            {
                nmax = max(nmax, countt);
                countt = 1;
            }
        }
        temp = x;
    }
    nmax = max(nmax, countt);
    cout << nmax;
    return 0;
}