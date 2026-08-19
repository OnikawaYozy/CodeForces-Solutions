#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll h1 = 20 * 60, h2 = 24*60, n, m;
    cin >> n >> m;
    h1 += m;
    ll countt = 0;
    for (ll i = 1; i <= n; i++)
    {
        h1 += i * 5;
        if (h1 > h2) break;
        countt++;
    }
    cout << countt;
    return 0;
}