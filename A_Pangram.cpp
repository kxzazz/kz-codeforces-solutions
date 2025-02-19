#include <iostream>
#include <set>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    int t;
    cin >> t;
    if (t < 25)
    {
        no;
        return;
    }
    string s;
    cin >> s;

    set<char> ss;
    for (int i = 0; i < t; i++)
        ss.insert((s[i] >= 'a') ? s[i] : s[i] - ('A' - 'a'));

    (ss.size() == 26) ? yes : no;
    // YNC(ss.size() == 26, "YES", "NO");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
