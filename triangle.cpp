#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
// You will be given three non - negative integers A, B and C.You need to tell if these integers form an equilateral triangle(A triangle whose three sides are the same and each side contains a positive value).If the answer is yes, print "Yes" otherwise "No".