#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int v = 0, c = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                v++;
            else if (s[i] >= 48 && s[i] <= 57)
                d++;
            else
                c++;
        }
        int bv = v / 2 + (v % 2 != 0);
        int bc = c / 3 + (c % 3 != 0);
        int bd = d;
        cout
            << max({bv, bc, bd}) << endl;
    }

    return 0;
}
// You are given T test cases.In each test case, you are given a string consisting of small letters and digits.You are given some boxes to store characters according to some rules.

//                                              The rules are really simple.You will be able to store

//                                                  no more than 3 consonants in a box no more than 2 vowels in a box no more than 1 digit in a box Your task is to find out the minimum number of boxes needed to store all of the characters from the string.

//                                              Input Format

//                                                  The first line will contain T,
//     the number of test cases.For every T, there will be a string S string consisting of only small letters and digits.