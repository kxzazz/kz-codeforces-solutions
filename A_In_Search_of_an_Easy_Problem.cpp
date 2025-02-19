#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "HARD\n";
            return;
        }
    }

    cout << "EASY\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}