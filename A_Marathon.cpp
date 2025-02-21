#include <iostream>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        if (a - t > 0)
            count++;
    }

    cout << count << endl;
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