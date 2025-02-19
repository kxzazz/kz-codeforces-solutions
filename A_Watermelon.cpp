#include <iostream>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    int w;
    cin >> w;
    (w != 2 && w % 2 == 0) ? yes : no;
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