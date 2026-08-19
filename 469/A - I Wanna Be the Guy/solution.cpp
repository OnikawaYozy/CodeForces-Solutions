#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, p, x;
    set<ll> a;
    cin >> n;
    cin >> p;
    for (ll i = 0; i < p; i++)
    {
        cin >> x;
        a.insert(x);
    }
    cin >> p;
    for (ll i = 0; i < p; i++)
    {
        cin >> x;
        a.insert(x);
    }
    if (a.size() == n) cout << "I become the guy.
";
    else cout << "Oh, my keyboard!
";
    return 0;
}