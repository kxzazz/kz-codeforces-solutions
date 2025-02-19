#include <iostream>
#include <set>

using namespace std;
#define YNC(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    int n;
    cin >> n;

    set<int> ss;

    int n1;
    cin >> n1;
    while (n1--)
    {
        int a;
        cin >> a;
        ss.insert(a);
    }

    int n2;
    cin >> n2;
    while (n2--)
    {
        int b;
        cin >> b;
        ss.insert(b);
    }

    YNC(ss.size() == n, "I become the guy.", "Oh, my keyboard!");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}