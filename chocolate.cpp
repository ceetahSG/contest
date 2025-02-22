#include <bits/stdc++.h>
using namespace std;
int cnt;
void Totalcount(int chocolate)
{
    if (chocolate < 3)
        return;
    int Newchocolate = chocolate / 3;
    cnt += Newchocolate;

    Totalcount(Newchocolate + (chocolate % 3));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int tk;
        cin >> tk;
        int chocolate = tk / 5;

        cnt = chocolate;

        Totalcount(chocolate);
        cout << cnt << endl;
    }

    return 0;
}
// Saima a little girl has N tk. She will buy chocolate with her N tk. Each chocolate price is 5 tk. After buying the chocolates, the salesman told her that if she returned 3 wrappers of chocolates, she would get 1 chocolate. Now find out how many chocolates she can get with her N tk.

// Suppose, she has 45 tk.

// She will buy 9 chocolates with 45 tk.

// Then she will return those 9 wrappers of her 9 chocolates.

// Then she will get another 3 chocolates for returning 9 wrappers.

// Then she will again return those 3 wrappers of 3 chocolates.

// Then she will get another 1 chocolate for returning 3 wrappers.

// So, she can get 9 + 3 + 1 = 13 chocolates for 45 tk.

// You must solve this problem using recursion.