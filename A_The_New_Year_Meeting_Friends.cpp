#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int house[3];
    for (int i = 0; i < 3; i++)
        cin >> house[i];

    sort(house, house + 3);

    cout << abs(house[0] - house[1]) + abs(house[1] - house[2]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}