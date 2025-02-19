#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string prev;
    cin >> prev;
    int groups = 0;
    while (n--)
    {
        string cur;
        cin >> cur;
        if (cur != prev)
            groups++;

        prev = cur;
    }

    cout << groups << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}