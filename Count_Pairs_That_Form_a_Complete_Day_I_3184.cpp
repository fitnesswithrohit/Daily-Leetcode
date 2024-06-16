#include <bits/stdc++.h>
using namespace std;

int countCompleteDayPairs(vector<int> &hours)
{
    int n = hours.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((hours[i] + hours[j]) % 24 == 0)
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> hours(n);
    for (int i = 0; i < n; i++)
    {
        cin >> hours[i];
    }

    cout << countCompleteDayPairs(hours);
    return 0;
}