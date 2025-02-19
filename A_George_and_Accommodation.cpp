#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int rooms = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b - a >= 2)
            rooms++;
    }

    cout << rooms << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}