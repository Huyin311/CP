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
    multiset<int> s;
    for (int i=0; i<n; i++)
    {
        int x; cin >> x;
        auto it = s.upper_bound(x);
        if (it != s.end())
        {
            s.erase(it);
        }
        s.insert(x);
    }
    cout << s.size();
}

int main()
{
    fastio;
    solve();
    return 0;
}