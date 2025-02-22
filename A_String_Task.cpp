// ANCHOR: bro output not working
/*Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

- deletes all the vowels,
- inserts a character "." before each consonant,
- replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.
*/
// wrong output
// xnhcigytnqcmy => .x.n.h.c.g.y.t.n.q.c.m.y
// .x.n.h.c.g.t.n.q.c.m [jury answer]

#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        bool vowel = s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u';
        if (!vowel)
        {
            res += '.';
            res += s[i];
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}