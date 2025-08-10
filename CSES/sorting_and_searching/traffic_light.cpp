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
    int n, m; cin >> n >> m;
    set<int> a = {0, n};
    multiset<int> b = {n};
    while(m--)
    {
        int x; cin >> x;
        auto it = a.upper_bound(x);
        int l = *prev(it), r = *it;
        b.erase(b.find(r-l));
        b.insert(x-l);
        b.insert(r-x);
        a.insert(x);
        cout << *b.rbegin() << " ";
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}