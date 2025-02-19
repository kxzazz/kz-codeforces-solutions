#include <iostream>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    string s;
    cin >> s;

    int luck = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
            luck++;
    }

    if (luck == 0)
    {
        no;
        return;
    }

    while (luck > 0)
    {
        if (luck % 10 != 4 && luck % 10 != 7)
        {
            no;
            return;
        }

        luck /= 10;
    }

    yes;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}