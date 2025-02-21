#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vc;
    for (int i = 0; n != 0; i++)
    {
        int r = n % 10;
        if (r != 0)
        {
            vc.push_back(r * pow(10, i));
        }

        n /= 10;
    }

    cout << vc.size() << endl;
    for (int i : vc)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}