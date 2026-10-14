#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        str s;
        ll a = 0, b = 0;
        cin >> s;
        for (ll i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == s[i - 1] && s[i] == s[i + 1]) a = 1;
            if (s[i] != s[i - 1] && s[i - 1] == s[i + 1]) b = 1;
        }
        cout << 1 + a + b << "
";
    }
}