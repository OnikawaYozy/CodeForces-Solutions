#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        str s1, s2;
        cin >> s1 >> s2;
        ll a[26] = {0}, b[26] = {0};
        for (ll i = 0; i < n; i++) a[s1[i] - 'a']++;
        for (ll i = 0; i < n; i++) b[s2[i] - 'a']++;
        bool check = true;
        for (ll i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                check = false;
                break;
            }
        }
        if (check) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}