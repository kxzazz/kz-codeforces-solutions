#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    int x = 0;
    while (tt--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            x++;
        if (s[0] == '-' || s[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}