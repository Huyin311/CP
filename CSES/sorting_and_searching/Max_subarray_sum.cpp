#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i<n; i++) cin >> a[i];
    long long sum = a[0], ma = a[0];
    for (int i=1; i<n; i++)
    {
        sum = max(a[i], sum + a[i]);
        ma = max(sum, ma);
    }
    cout << ma;
}
