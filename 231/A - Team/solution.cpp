#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, countt = 0;
    cin >> n;
    while (n--)
    {
        ll a, b, c, p = 0;
        cin >> a >> b >> c;
        if (a == 1) p++;
        if (b == 1) p++; 
        if (c == 1) p++;
        if (p > 1) countt++;
    }
    cout << countt;
    return 0;
}