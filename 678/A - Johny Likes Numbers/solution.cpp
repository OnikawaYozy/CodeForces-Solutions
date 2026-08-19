#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    cout << n + (k - (n % k));
    return 0;
}