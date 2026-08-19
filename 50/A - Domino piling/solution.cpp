#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    if (n % 2 == 1 && m % 2 == 1) cout << ((m - 1)*n/2) + ((n-1)/2);
    else cout << m*n/2;
    return 0;
}