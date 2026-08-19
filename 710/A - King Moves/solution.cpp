#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    str s;
    cin >> s;
    char col = s[0], row = s[1];
    bool check1 = (col == 'a' || col == 'h'), check2 = (row == '1' || row == '8');
    if (check1 && check2) cout << 3;
    else if (check1 || check2) cout << 5;
    else cout << 8;
    return 0;
}