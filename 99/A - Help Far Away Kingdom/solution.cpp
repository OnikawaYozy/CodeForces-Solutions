#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    str s;
    cin >> s;
    size_t dot = s.find('.');
    str nguyen = s.substr(0, dot);
    char fdecimal = s[dot + 1];
    if (nguyen.back() == '9') cout << "GOTO Vasilisa." << "
";
    else
    {
        if (fdecimal >= '5') nguyen.back()++;
        cout << nguyen << "
";
    }
    return 0;
}