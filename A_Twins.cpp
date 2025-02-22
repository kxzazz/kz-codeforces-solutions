#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 2;
    sort(arr, arr + n);
    int count = 0, rsum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        rsum += arr[i];
        count++;
        if (rsum > sum)
            break;
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}