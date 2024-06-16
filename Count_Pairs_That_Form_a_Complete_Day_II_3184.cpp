#include <bits/stdc++.h>
using namespace std;

long long countCompleteDayPairs(vector<int> &hours)
{
    long long count = 0;
    unordered_map<int, int> mapping;

    for (int i = 0; i < hours.size(); i++)
    {

        int rem = hours[i] % 24;
        int complement = (24 - rem) % 24;

        if (mapping.find(complement) != mapping.end())
        {
            count += mapping[complement];
        }

        mapping[rem]++;
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