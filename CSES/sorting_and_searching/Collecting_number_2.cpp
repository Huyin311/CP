#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p; cin >> n >> p;
    vector<int> a(n), m(n+1);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]] = i;
    }

    while (p--)
    {
        int l,k; cin >> l >> k;
        swap(m[l], m[k]);
        long long sum=1;
        for (int i = 2; i <= n; i++)
        {
            if (m[i] < m[i-1])
                sum++;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << m[i];
        }
        cout << sum <<endl;

    }
}

