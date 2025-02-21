#include <iostream>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int time_req = 4 * 60 - k;
    int total_time = 0;
    for (int i = 1; i <= n; i++)
    {
        total_time += i * 5;
        if (total_time > time_req)
        {
            cout << i - 1 << endl;
            return;
        }
    }

    cout << n << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}