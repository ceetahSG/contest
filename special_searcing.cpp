#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), pre(n);
    cin >> a[0];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        pre[i] = (pre[i - 1] + a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int s;
        cin >> s;
        int idx = lower_bound(pre.begin(), pre.end(), s) - pre.begin();
        if (idx == n)
            cout << "-1" << "\n";
        else
            cout << idx + 1 << "\n";
    }
    return 0;
}
// You are given an array A of size N and Q queries.For each query, you are given a target sum S.Your task is to find the minimum index i(1 - based indexing) such that the sum of the elements from the first index to i(i.e., A[1] + A[2] + ... + A[i]) is greater than or equal to S.If no such index exists, return -1.

//                                                                                                                                                                                                                                                                                                                      Note : Don’t forget to use fast I
//                                                                                                                                                                                                                                                                                                                      / o code in main function.ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// Use this two line at the beginning of the main function.Use ‘\n’ instead of endl;