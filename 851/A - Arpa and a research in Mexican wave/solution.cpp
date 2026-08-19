#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, k, t;
    cin >> n >> k >> t;
    if (t >= k && t <= n) cout << k;
    else
    {
        if (t < k) cout << t;
        else if (t > n) cout << k - (t - n);
    }
    return 0;
}