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
    if (n == 1) cout << 7;
    else if (n == 2) cout << 4;
    else if (n % 2 != 0) cout << 1;
    else cout << n - 2;
    return 0;
}