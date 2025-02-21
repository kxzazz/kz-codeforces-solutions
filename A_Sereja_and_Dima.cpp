#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cards[n];
    for (int i = 0; i < n; i++)
        cin >> cards[i];

    int p = 0, q = n - 1;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        int s = max(cards[q], cards[p]);
        (cards[p] > cards[q]) ? p++ : q--;
        (i % 2 == 0) ? s1 += s : s2 += s;
    }

    cout << s1 << " " << s2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}