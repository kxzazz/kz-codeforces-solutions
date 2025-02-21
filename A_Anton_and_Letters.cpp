#include <iostream>
#include <set>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);

    set<char> sch;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            sch.insert(s[i]);
    }
    cout << sch.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}