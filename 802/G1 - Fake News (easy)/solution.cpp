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
    str p = "heidi";
    ll n = 0;
    for (char c : s)
    {
        if (c == p[n]) n++;
        if (n == 5)
        {
            cout << "YES
";
            return 0;
        }
    }
    cout << "NO
";
    return 0;
}