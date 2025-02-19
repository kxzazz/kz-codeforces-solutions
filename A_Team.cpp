#include <iostream>

using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define REP(i, j) FOR(i, 0, j, 1)

void solve()
{
    int lines;
    cin >> lines;
    int total = 0;
    REP(i, lines)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1)
            total++;
    }
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        // cout << tc;
        solve();
    }
    return 0;
}