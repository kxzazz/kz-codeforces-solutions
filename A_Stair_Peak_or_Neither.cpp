#include <iostream>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b || b == c)
    {
        cout << "NONE" << endl;
        return;
    }

    (b < c) ? cout << "STAIR" : cout << "PEAK";
    cout << endl;
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