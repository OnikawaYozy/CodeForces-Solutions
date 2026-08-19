#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t, n = 0, m = 0;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b) n++;
        else if (a < b) m++;
    }
    if (n > m) cout << "Mishka
";
    else if (n == m) cout << "Friendship is magic!^^
";
    else cout << "Chris
";
    return 0;
}