#include <iostream>

using namespace std;

void solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;

    int res = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if (s[i] == s[i + 1])
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