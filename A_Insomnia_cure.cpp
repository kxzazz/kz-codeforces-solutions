#include <iostream>

using namespace std;

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int tot_D = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            tot_D++;
    }

    cout << tot_D << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}