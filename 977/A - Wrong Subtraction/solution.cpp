#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll i = 0;
    for (ll i = 1; i <= k; i++)
    {
        if (n != 0)
        {
            if (n % 10 == 0) n /= 10;
            else n--;
        }
        else break;
    }
    cout << n;
    return 0;
}