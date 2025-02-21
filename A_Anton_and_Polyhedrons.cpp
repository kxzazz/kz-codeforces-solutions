#include <iostream>
#include <map>

using namespace std;

void solve()
{
    map<string, int> mp = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int t;
    cin >> t;

    int faces = 0;
    while (t--)
    {
        string s;
        cin >> s;
        faces += mp[s];
    }

    cout << faces << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}