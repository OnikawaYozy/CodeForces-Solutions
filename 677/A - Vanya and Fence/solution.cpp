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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > k) sum += 2;
        else sum++;
    }
    cout << sum;
    return 0;
}