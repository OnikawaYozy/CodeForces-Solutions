#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    set<string> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        str s1;
        cin >> s1;
        if (s.count(s1)) cout << "YES
";
        else
        {
            cout << "NO
";
            s.insert(s1);
        }
    }
    return 0;
}