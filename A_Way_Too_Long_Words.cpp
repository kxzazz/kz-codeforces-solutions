#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    if (l <= 10)
    {
        cout << s << endl;
        return;
    }

    cout << s[0] << l - 2 << s[l - 1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        // cout << tc;
        solve();
    }
    return 0;
}