#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        stack<int> st;
        for (int x : v)
        {
            if (!st.empty() && st.top() == x)
                st.pop();
            else
                st.push(x);
        }
        if (!st.empty())
            cout << st.top() << endl;
        }
    return 0;
}
// Sakib threw a party in his house to celebrate his birthday.He told his friends a dress code to wear, the dress code is to wear even unique pearls in his / her dress, where each pearl will have a code written on it.Unfortunately there was a thief planning to rob the house.The thief knew about the dress code, but he didn't know the exact number of pearls they needed to wear. So the thief wears an odd number of pearls in his dress.

//     You have N numbers where each number represents a pearl code,
//     you need to detect the code of the thief's pearl so that you can detect the thief.