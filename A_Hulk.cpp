#include <iostream>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    string s = "";
    string arr[t];

    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
            arr[i] = "I hate";
        else
            arr[i] = "I love";
    }

    s.append(arr[0]);

    for (int i = 1; i < t; i++)
    {
        s.append(" that " + arr[i]);
    }

    s.append(" it");

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
