#include <iostream>

using namespace std;
#define YNC(c) cout << ((c) ? "YES" : "NO") << endl
void solve()
{
    string s;
    cin >> s;
    bool match = false;
    for (char c : s)
        if (c == 'H' || c == 'Q' || c == '9')
        {
            match = true;
            break;
        }
    YNC(match);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}