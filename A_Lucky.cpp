#include <iostream>

#define YNC(c, a, b) cout << ((c) ? a : b) << endl
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.length(), balance = 0;
    for (int i = 0; i < 3; i++)
    {
        balance += s[i] - s[l - i - 1];
    }

    YNC(balance == 0, "YES", "NO");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}