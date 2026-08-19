#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    ll p = n / 2;
    str s;
    for (ll i = 0; i < n; i++)
    {
        ll countt1 = abs(p - i);
        ll countt2 = p - countt1;
        s = str(countt1, '*') + str(countt2, 'D');
        cout << s << "D";
        reverse(s.begin(), s.end());
        cout << s << "
";
    }
    return 0;
}