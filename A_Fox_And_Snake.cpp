#include <iostream>

using namespace std;
#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    int i, j;
    cin >> i >> j;

    string hashes = "";
    string dots = "";

    hashes.append(j, '#');
    dots.append(j - 1, '.');

    for (int p = 0; p < i; p++)
    {
        if (p % 2 == 0)
        {
            cout << hashes << endl;
            continue;
        }

        YNC(((p + 1) / 2) % 2 == 1, dots + "#", "#" + dots);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}