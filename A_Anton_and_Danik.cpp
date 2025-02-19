#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string games;
    cin >> games;

    int balance = 0;
    for (char c : games)
    {
        if (c == 'A')
            balance--;
        else
            balance++;
    }

    if (balance == 0)
    {
        cout << "Friendship" << endl;
        return;
    }

    cout << ((balance < 0) ? "Anton" : "Danik") << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}