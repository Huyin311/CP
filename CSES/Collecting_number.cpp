#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> a(n), m(n+1);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }
    long long sum=1;
    for (int i = 2; i <= n; i++)
    {
        if (m[i] < m[i-1])
            sum++;
    }
    cout << sum;
}
