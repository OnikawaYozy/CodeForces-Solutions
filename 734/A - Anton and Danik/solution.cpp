#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, a = 0, d = 0;
    cin >> n;
    str s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A') a++;
        else d++;
    }
    if (a > d) cout << "Anton";
    else if (a == d) cout << "Friendship";
    else cout << "Danik";
    return 0;
}