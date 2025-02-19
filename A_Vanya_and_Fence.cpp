#include <iostream>

using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;

    int width = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a > h)
            width++;
        width++;
    }

    cout << width << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}