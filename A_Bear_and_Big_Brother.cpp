#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    while (true)
    {
        if (a > b)
            break;

        a *= 3;
        b *= 2;
        res++;
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}