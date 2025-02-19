#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    int lo = 0, hi = 0;
    int gap = 'a' - 'A';

    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'a')
            lo++;
        else
        {
            hi++;
            s[i] += gap;
        }
    }

    if (hi > lo)
    {
        for (int i = 0; i < l; i++)
        {
            s[i] -= gap;
        }
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}