#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cap = 0;
    int total = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        total += (b - a);
        cap = max(total, cap);
    }
    cout << cap << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}