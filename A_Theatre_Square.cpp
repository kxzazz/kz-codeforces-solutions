#include <iostream>

using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;
    n += (n % a == 0) ? 0 : a - n % a;
    m += (m % a == 0) ? 0 : a - m % a;
    cout << m / a * n / a << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}