#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int x = a[n/2];
    long long ans = 0;
    for (int i=0; i<n; i++) ans += abs(a[i]-x);
    cout << ans;
}
