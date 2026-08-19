#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, sum = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        str p;
        cin >> p;
        if (p == "Tetrahedron") sum += 4;
        if (p == "Cube") sum += 6;
        if (p == "Octahedron") sum += 8;
        if (p == "Dodecahedron") sum += 12;
        if (p == "Icosahedron") sum += 20;
    }
    cout << sum;
    return 0;
}