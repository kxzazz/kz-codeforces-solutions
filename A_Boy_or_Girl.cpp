#include <iostream>
#include <set>

using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define REP(i, j) FOR(i, 0, j, 1)

void solve()
{
    string s;
    cin >> s;

    set<char> a;
    REP(i, s.length())
    {
        a.insert(s[i]);
    }
    if (a.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
        return;
    }

    cout << "IGNORE HIM!" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout << tc;
    solve();

    return 0;
}