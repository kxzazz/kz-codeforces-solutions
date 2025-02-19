#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;
    while (true)
    {
        x++;
        int a = x / 1000;
        int b = x / 100 % 10;
        int c = x / 10 % 10;
        int d = x % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << x << endl;
            return;
        }
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