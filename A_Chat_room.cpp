#include <iostream>

using namespace std;
#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    string s;
    cin >> s;
    string hello = "hello";
    int p = 0, l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == hello[p])
        {
            p++;
        }
    }

    YNC(p == 5, "YES", "NO");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}