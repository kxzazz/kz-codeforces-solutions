#include <iostream>
#include <set>

using namespace std;

void solve()
{
    int t = 4;
    set<int> s;
    while (t--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    cout << 4 - s.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}