#include <iostream>

using namespace std;
#define YNC(c) cout << ((c) ? "YES" : "NO") << endl
void solve()
{
    int lucky[] = {4, 7, 47, 444, 447, 474, 744, 477, 747, 774, 777};
    int n;
    cin >> n;
    bool luck = false;
    for (int num : lucky)
    {
        if (n % num == 0)
        {
            luck = true;
            break;
        }
    }
    YNC(luck);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}