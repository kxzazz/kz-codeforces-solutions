#include <iostream>

using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    string ans = "";
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        ans.append((s[i] != t[i]) ? "1" : "0");
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}