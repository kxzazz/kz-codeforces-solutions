#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int tot = 0;
    int denom[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        tot += n / denom[i];
        n = n % denom[i];
    }

    cout << tot << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}