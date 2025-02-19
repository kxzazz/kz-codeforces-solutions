#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int rec[n + 1];

    for (int i = 1; i < n + 1; i++)
        cin >> rec[i];

    int giv[n];

    for (int i = 1; i < n + 1; i++)
    {
        giv[rec[i]] = i;
    }

    for (int i = 1; i < n + 1; i++)
        cout << giv[i] << " ";

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