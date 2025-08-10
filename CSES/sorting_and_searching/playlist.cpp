#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int l = 0, r = 0;
    map<int, int> m;
    ll ma = 0, size = 0;
    while (r < n)
    {
        m[a[r]]++;
        if (m[a[r]] <= 1)
        {
            r++; size++;
            ma = max(ma, size);
        }
        else
        {
            m[a[l]] = 0;
            size--;
            l++;
        }
    }
    cout << ma;
}

int main()
{
    fastio;
    solve();
    return 0;
}