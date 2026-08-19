#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, r;
    cin >> n >> r;
    ll p = 10, i = 1;
    bool check = true;
    while(check)
    {
        if ((n * i) % p == 0 || ((n * i) - r) % p == 0)
        {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}