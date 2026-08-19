#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, nmax = 0;
    str s, p;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    while (ss >> p)
    {
        ll countt = 0;
        for (ll i = 0; i < p.size(); i++) if (p[i] >= 'A' && p[i] <= 'Z') countt++;
        nmax = max(countt, nmax);
    }
    cout << nmax;
    return 0;
}