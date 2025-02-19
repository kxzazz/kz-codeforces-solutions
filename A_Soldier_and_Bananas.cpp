#include <iostream>

using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = w * (w + 1) * k / 2;
    cout << ((sum > n) ? sum - n : 0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}