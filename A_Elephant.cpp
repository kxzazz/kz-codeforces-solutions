#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;

    int res = 0;
    for (int i = 5; i >= 1; i--)
    {
        res += x / i;
        x %= i;
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}