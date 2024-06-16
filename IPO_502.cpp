#include <bits/stdc++.h>
using namespace std;

int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
{
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > p;
    priority_queue<int> q;

    for (int i = 0; i < capital.size(); i++)
    {
        p.push(make_pair(capital[i], profits[i]));
    }

    int i = 0;
    while (k--)
    {
        while (i < profits.size() && p.top().first <= w)
        {
            q.push(p.top().second);
            i++;
            p.pop();
        }

        if (q.empty())
            break;

        w += q.top();
        q.pop();
    }

    return w;
}

int main()
{
    int n;
    cin >> n;
    int k, w;
    cin >> k >> w;
    vector<int> profits(n);
    vector<int> capital(n);
    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> capital[i];
    }

    cout << findMaximizedCapital(k, w, profits, capital);
    return 0;
}