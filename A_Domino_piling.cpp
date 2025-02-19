#include <iostream>

using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    int sq = m * n;
    if (sq % 2 == 1)
        sq--;

    cout << (int)sq / 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}