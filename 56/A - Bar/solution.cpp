#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, ans = 0;
    cin >> n;
    unordered_set<str> a = {"ABSINTH", "TEQUILA", "VODKA", "WHISKEY", "WINE", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE"};
    for (ll i = 0; i < n; i++)
    {
        str s;
        cin >> s;
        stringstream ss(s);
        ll age;
        if (ss >> age && ss.eof())
        {
            if (age < 18) ans++;
        }
        else
        {
            if (a.find(s) != a.end()) ans++;
        }
    }
    cout << ans << "
";
    return 0;
}