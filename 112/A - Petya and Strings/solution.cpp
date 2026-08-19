#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    str s1, s2;
    cin >> s1 >> s2;
    for (ll i = 0; i < s1.size(); i++) s1[i] = (char)tolower(s1[i]);
    for (ll i = 0; i < s2.size(); i++) s2[i] = (char)tolower(s2[i]);
    if (s1 > s2) cout << 1;
    else if (s1 == s2) cout << 0;
    else cout << -1;
    return 0;
}