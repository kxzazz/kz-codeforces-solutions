#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int gap = abs(a - b);
    int steps = 0;
    for (int i = 10; i >= 1; i--)
    {
        steps += gap / i;
        gap %= i;
    }
    cout << steps << endl;
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