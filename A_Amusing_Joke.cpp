#include <iostream>
#include <map>

using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    string s, t, q;
    cin >> s >> t >> q;
    // check input lengths
    if (s.length() + t.length() != q.length())
    {
        no;
        return;
    }

    // make maybe pile and pile
    map<char, int> th_pile;
    for (char c : s)
        th_pile[c]++;
    for (char c : t)
        th_pile[c]++;

    for (char c : q)
    {
        if (th_pile[c] <= 0)
        {
            no;
            return;
        }

        th_pile[c]--;
    }

    yes;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}