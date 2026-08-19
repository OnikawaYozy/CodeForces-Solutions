#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2;
    else cout << (-1) * (n + 1) / 2;
    return 0;
}