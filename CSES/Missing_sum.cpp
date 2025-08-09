#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long sum = 0;
    for (int i:a)
        if((sum + 1) < i)
        {
            cout << sum + 1;
            return 0;
        }
        else sum += i;
    cout << sum + 1;
}
