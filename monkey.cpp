#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    while (getline(cin, s))
    {
        vector<char> v;
        for (char c : s)
            if (c >= 'a' && c <= 'z')
                v.push_back(c);
        sort(v.begin(), v.end());
        for (char c : v)
            cout << c;
        cout << endl;
    }

    return 0;
}
// Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

// Note: Input will be given by EOF.