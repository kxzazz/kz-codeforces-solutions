#include <iostream>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    string s;
    cin >> s;
    (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') ? yes : no;
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