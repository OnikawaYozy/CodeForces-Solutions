#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t, x = 0;
    cin >> t;
    while (t--)
    {
        str s;
        cin >> s;
        if (s.find("--") != str::npos) x--;
        else if (s.find("++") != str::npos) x++;
    }
    cout << x;
    return 0;
}