#include <iostream>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
        cin >> a[i];

    bool pass = false;
    while (!pass)
    {
        for (int i = 0; i < t - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int gap = a[i] - a[i + 1];
                a[i] -= gap;
                a[i + 1] += gap;
            }
        }

        pass = true;
        for (int i = 0; i < t - 1; i++)
            if (a[i] > a[i + 1])
            {
                pass = false;
                break;
            }
    }
    for (int i = 0; i < t; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}