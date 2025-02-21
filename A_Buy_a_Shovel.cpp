#include <iostream>

using namespace std;

void solve()
{
    int k, r;
    cin >> k >> r;
    int bought = 1;
    while (true)
    {
        if ((bought * k - r) % 10 == 0 || (bought * k) % 10 == 0)
        {
            cout << bought << endl;
            return;
        }

        bought++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}