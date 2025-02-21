#include <iostream>

using namespace std;

void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i] -= arr[3];
        arr[i] *= -1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}