#include <iostream>

using namespace std;

#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    YNC(a + b == c || b - a == c || a - b == c, "YES", "NO");
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