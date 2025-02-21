#include <iostream>
#include <map>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    map<int, int> home;
    map<int, int> guest;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        home[a]++;
        guest[b]++;
    }

    int tot = 0;
    for (auto i : home)
    {
        tot += i.second * guest[i.first];
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