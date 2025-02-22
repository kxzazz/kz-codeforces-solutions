#include <iostream>

using namespace std;
#define CYN(c, a, b) cout << ((c) ? a : b) << endl
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long mid = n / 2 + 1;

    if (mid > k)
    {
        // kth odd number
        cout << 2 * k - 1 << endl;
        return;
    }

    if (mid < k)
    {
        // (k-mid)th even
        // for even +1 is required
        // as even's starting point is shifted by 2 when subtracting mid
        cout << 2 * (k - mid + 1 - n % 2) << endl;
        return;
    }
    // mid for even is always 2
    // mid for odd is n
    CYN(n % 2 == 0, 2, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}