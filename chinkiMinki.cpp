
#include <bits/stdc++.h>
using namespace std;

int minDiff;

void findMinDiff(int index, int count, int currentSum, int k, const vector<int> &coins, int totalSum)
{

    if (count == k)
    {
        int diff = abs(currentSum - (totalSum - currentSum));
        minDiff = min(minDiff, diff);
        return;
    }

    if (index >= coins.size())
        return;

    findMinDiff(index + 1, count + 1, currentSum + coins[index], k, coins, totalSum);

    findMinDiff(index + 1, count, currentSum, k, coins, totalSum);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        minDiff = INT_MAX;
        int n;
        cin >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }

        int totalSum = accumulate(coins.begin(), coins.end(), 0);

        int k;
        if (n % 2 == 0)
            k = n / 2;
        else
            k = (n + 1) / 2;

        findMinDiff(0, 0, 0, k, coins, totalSum);

        cout << minDiff << endl;
    }

    return 0;
}
// Chinki and Minki are two sisters who share a deep bond of love, and they extend this love even to their food.They have a habit of splitting everything equally between them.One fine day, their father gave them a total of N coins and asked them to divide it amongst themselves.However, there's a twist - the coins they received are not of equal value; they can have different denominations. This presents a challenge because there is no guarantee that they can divide the coins equally.

//     So,
//     Chinki and Minki devised a plan to divide the coins in a way that minimizes the difference between the sums of the coins they receive.They agreed that each of them should get N / 2 coins(if N is even).In case N is odd, one of them will receive an extra coin.However, they are not sure how to execute this plan efficiently.Can you help them achieve their goal ?

//                                                                                                                                                                                                                                                                                                                                                                            For example
//                                                                                                                                                                                                                                                                                                                                                                            : Let's consider a scenario where their father gives them 8 coins with the following denominations: 23, 45, 34, 12, 0, 3, 1, and 4. They need to divide these coins among themselves in the following manner:

// Chinki: 45, 12, 3, 1
// Minki: 23, 34, 0, 4
// In this division, both Chinki and Minki receive subsets of equal size, each containing 4 coins. Remarkably, the sum of coins in both parts is identical, amounting to 61 for each of them. Consequently, the minimum difference in the sum of coins between the two parts is 0.

// This example illustrates their strategy for dividing the coins, ensuring that the difference in the sum of coins is minimized.