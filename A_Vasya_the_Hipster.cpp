#include <iostream>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    cout << b << " " << (a - b) / 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}