#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << ((a % b == 0) ? 0 : b - (a % b)) << endl;
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