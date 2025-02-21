#include <iostream>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    cout << (n / 2 - (1 - n % 2)) << endl;
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