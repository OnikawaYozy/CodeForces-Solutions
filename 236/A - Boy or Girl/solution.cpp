#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
ll a[26] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    str s;
    ll countt = 0;
    cin >> s;
    for (ll i = 0; i < s.size(); i++) a[s[i] - 'a']++;
    for (ll i = 0; i < 26; i++) if (a[i] > 0) countt++;
    if (countt % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}