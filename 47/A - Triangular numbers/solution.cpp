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
    ll n, i = 1;
    cin >> n;
    while (n > 0)
    {
        n -= i;
        i++;
    }
    if (n == 0) cout << "YES
";
    else cout << "NO
";
    return 0;
}