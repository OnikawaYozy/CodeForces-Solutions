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
    reverse(s1.begin(), s1.end());
    if (s1 == s2) cout << "YES
";
    else cout << "NO
";
    return 0;
}