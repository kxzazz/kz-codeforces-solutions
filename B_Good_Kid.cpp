#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int nums[n];
    // take input if number of zeros > 1 => max prod is 0 always
    //  if only 1 zero occurs then replace zero with 1 and max prod is prod of inputs
    int total_prod = 1;
    bool one_zero = false;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

        if (nums[i] == 0)
        {
            if (one_zero)
            {
                cout << 0 << endl;
                return;
            }

            nums[i] = 1;
            one_zero = true;
        }
        total_prod *= nums[i];
    }
    // if one zero occured return the prod
    if (one_zero)
    {
        cout << total_prod << endl;
        return;
    }

    // prod = abcd
    // prod after op = (a+1)bcd => abcd + bcd => prod + prod/a
    int max_prod = -1;
    for (int i = 0; i < n; i++)
    {
        max_prod = max(max_prod, total_prod + total_prod / nums[i]);
    }

    cout << max_prod << endl;
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