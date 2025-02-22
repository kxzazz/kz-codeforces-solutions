#include <iostream>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(
                    max(a * b * c, a + b * c),
                    max(a * b + c, a + b + c)),
                max((a + b) * c, a * (b + c)));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}