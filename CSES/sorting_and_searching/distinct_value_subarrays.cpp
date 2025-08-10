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
    for (int i=0; i<n; ++i) cin >> a[i];
    ll l=0, r=0, ans=0;
    set<int> s;
    while (r<n)
    {
        if(s.find(a[r]) != s.end())
        {
            s.erase(a[l]);
            l++;
        }
        else
        {
            ans += r-l+1;
            s.insert(a[r]);
            r++;
        }
    }
    cout << ans;
}

int main()
{
    fastio;
    solve();
    return 0;
}