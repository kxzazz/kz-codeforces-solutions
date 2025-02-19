#include <iostream>

using namespace std;
#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    int n, maxV = 0, minV = 1000, maxI = 0, minI = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxV)
        {
            maxI = i;
            maxV = x;
        }

        if (x <= minV)
        {
            minI = i;
            minV = x;
        }
    }

    YNC(maxI > minI, maxI + n - minI - 2, maxI - minI + n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}