#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string zz = "0000000";
    string oo = "1111111";

    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        string sub = s.substr(i, 7);
        if (sub == zz || sub == oo)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}