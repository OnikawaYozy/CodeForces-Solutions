#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
ll n, a[105];
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll i = 0; i < n; i++) cin >> a[i];
        cout << __gcd(a[0], a[n - 1]) << "
";
    }
}