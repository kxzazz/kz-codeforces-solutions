#include <iostream>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        no;
        return;
    }
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] != t[l - i - 1])
        {
            no;
            return;
        }
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