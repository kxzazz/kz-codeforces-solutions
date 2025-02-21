#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int v[n];
    int res = 0;

    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mmax = v[0];
    int mmin = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > mmax || v[i] < mmin)
            res++;
        mmax = max(v[i], mmax);
        mmin = min(v[i], mmin);
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