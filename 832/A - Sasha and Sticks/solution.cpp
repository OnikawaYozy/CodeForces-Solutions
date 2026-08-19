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
    if ((a / b) % 2 == 1) cout << "YES
";
    else cout << "NO
";
    return 0;
}