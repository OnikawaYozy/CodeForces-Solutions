#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k, countt = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        char z;
        ll p;
        cin >> z >> p;
        if (z == '+') k += p;
        else if (z == '-')
        {
            if (p <= k) k -= p;
            else countt++;
        }
    }
    cout << k << " " << countt;
    return 0;
}