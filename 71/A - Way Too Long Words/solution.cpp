#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        str s;
        cin >> s;
        if (s.size() <= 10) cout << s;
        else cout << s[0] << s.size() - 2 << s[s.size()-1];
        cout << "
";
    }
    return 0;
}