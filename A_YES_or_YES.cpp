#include <iostream>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    string s;
    cin >> s;

    if (s[0] != 'Y' && s[0] != 'y' || s[1] != 'e' && s[1] != 'E' || s[2] != 's' && s[2] != 'S')
    {
        no;
        return;
    }
    yes;
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