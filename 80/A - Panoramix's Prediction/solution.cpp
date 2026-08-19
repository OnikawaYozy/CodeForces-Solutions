#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(ll k)
{
    if (k < 2) return false;
    for (int i = 2; i * i <= k; ++i) if (k % i == 0) return false;
    return true;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    ll temp = n + 1;
    while (!solve(temp)) temp++;
    if (temp == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}