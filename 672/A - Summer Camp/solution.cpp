#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    str s = "";
    ll i = 1;
    while (s.size() < n)
    {
        s += to_string(i);
        i++;
    }
    cout << s[n - 1] << endl;
    return 0;
}