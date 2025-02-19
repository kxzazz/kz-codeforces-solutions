#include <iostream>

using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define REP(i, j) FOR(i, 0, j, 1)

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    string res = "";
    int n_ones = 0, n_twos = 0, n_threes = 0;
    REP(i, l)
    {
        if (s[i] == '1')
            n_ones++;
        if (s[i] == '2')
            n_twos++;
        if (s[i] == '3')
            n_threes++;
    }

    while (n_ones--)
    {
        res.append("1+");
    }
    while (n_twos--)
    {
        res.append("2+");
    }
    while (n_threes--)
    {
        res.append("3+");
    }
    cout << res.substr(0, l) << endl;
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