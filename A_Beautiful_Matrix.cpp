#include <iostream>

using namespace std;

void solve()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int ele;
            cin >> ele;
            if (ele == 1)
            {
                cout << abs(3 - i) + abs(3 - j) << endl;
                return;
            }
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