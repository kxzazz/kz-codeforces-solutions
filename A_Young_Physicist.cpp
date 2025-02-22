#include <iostream>

using namespace std;
#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    YNC(xsum == 0 && ysum == 0 && zsum == 0, "YES", "NO");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}