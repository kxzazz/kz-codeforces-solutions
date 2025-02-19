#include <iostream>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    cout << ((n % 2 == 0) ? n / 2 : -1 * (n + 1) / 2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}