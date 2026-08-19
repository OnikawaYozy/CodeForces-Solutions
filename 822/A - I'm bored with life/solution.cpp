#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll s = 1;
    for (ll i = 1; i <= min(a, b); i++) s *= i;
    cout << s;
    return 0;
}