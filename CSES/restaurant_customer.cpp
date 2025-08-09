#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<int, int>> a(2*n);

    for (int i=0; i<2*n; i+=2)
    {
        cin >> a[i].first; a[i].second = 1;
        cin >> a[i+1].first;a[i+1].second = -1;
    }
    sort(a.begin(), a.end());
    int m = 0, sum = 0;
    for (pair<int, int> i:a)
    {
        sum += i.second;
        m = max(m, sum);
    }
    cout << m;
}
