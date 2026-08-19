#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1000003;
ll a[1000005] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}