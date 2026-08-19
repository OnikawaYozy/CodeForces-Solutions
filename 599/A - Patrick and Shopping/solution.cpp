#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll p1 = (a + b) * 2, p2 = (a + c) * 2, p3 = (b + c) * 2, p4 = a + b + c;
    cout << min({p1, p2, p3, p4});
    return 0;
}