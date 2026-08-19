#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll p = min({a / 1, b / 2, c / 4});
    cout << 1 * p + 2 * p + 4 * p;
    return 0;
}