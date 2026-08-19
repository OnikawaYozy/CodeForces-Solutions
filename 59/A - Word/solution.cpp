#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    str s;
    cin >> s;
    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') s1++;
        else if (s[i] >= 'A' && s[i] <= 'Z') s2++;
    }
    if (s1 >= s2) for (ll i = 0; i < s.size(); i++) cout << (char)tolower(s[i]);
    else for (ll i = 0; i < s.size(); i++) cout << (char)toupper(s[i]);
    return 0;
}