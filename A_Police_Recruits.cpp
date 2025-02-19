#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;

    int police = 0, crimes = 0;
    while (tc--)
    {
        int cur;
        cin >> cur;
        if (cur > 0)
            police += cur;

        if (cur == -1)
            (police == 0) ? crimes++ : police--;
    }
    cout << crimes << endl;
    return 0;
}