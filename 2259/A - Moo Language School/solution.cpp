#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, countt = 0;
        cin >> n >> k;
        str num;
        cin >> num;
        for (ll i = 0; i < n; i+=k)
        {
            str sub = num.substr(i, k);
            if (count(sub.begin(), sub.end(), '0') == 0) countt++;
        }
        cout << countt << "
";
    }
    return 0;
}