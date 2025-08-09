
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;
    sort (a.begin(), a.end(), [](const pair<int, int> &a, const pair<int, int> &b){
          return a.second < b.second;
    });
    int mi = a[0].second, sum = 1;
    for (int i =1; i<n; i++)
    {
        if (a[i].first >= mi)
        {
            mi = a[i].second;
            sum++;
        }
    }
    cout << sum;
}
