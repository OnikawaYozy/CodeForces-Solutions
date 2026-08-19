#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 != 0) cout << "I hate ";
        else cout << "I love ";
        if (i == n) cout << "it";
        else cout << "that ";
    }
    return 0;
}