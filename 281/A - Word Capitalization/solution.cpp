#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    str s;
    while (cin >> s)
    {
        char k = s.front();
        s.erase(0, 1);
        cout << (char)toupper(k) << s;
    }
 
    return 0;
}