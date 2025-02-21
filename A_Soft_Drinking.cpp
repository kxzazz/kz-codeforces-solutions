#include <iostream>

using namespace std;

void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = k * l / (nl * n);
    int y = c * d / n;
    int z = p / (np * n);
    cout << min(min(x, y), z) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}