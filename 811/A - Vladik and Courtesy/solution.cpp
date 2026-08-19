#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll i = 1;
    while (true)
    {
        if (i % 2 == 1)
        {
            if (a < i)
            {
                cout << "Vladik
";
                return 0;
            }
            a -= i;
        }
        else
        {
            if (b < i)
            {
                cout << "Valera
";
                return 0;
            }
            b -= i;
        }
        i++;
    }
    return 0;
}