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
    str s1, s2;
    cin >> s1 >> s2;
    for (ll i = 0; i < s1.size(); i++)
    {
        if ((s1[i] == '0' && s2[i] == '0') || (s1[i] == '1' && s2[i] == '1')) cout << 0;
        else if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1')) cout << 1;
    }
    return 0;
}