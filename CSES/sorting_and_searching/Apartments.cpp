#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector<int> b(m);
    for (int i=0; i<m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i=0, j=0, sum=0;
    while(i < n && j < m)
    {
        if (a[i] < b[j] - k) i++;
        else if (a[i] > b[j] + k) j++;
        else
        {
            i++; j++; sum++;
        }
    }
    cout << sum;
}
