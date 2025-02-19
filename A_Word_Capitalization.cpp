#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] >= 97)
    {
        s[0] -= 32;
    }
    cout << s << endl;
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