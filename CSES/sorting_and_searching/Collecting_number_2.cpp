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
    vector<int> a(n+1), p(n+1);
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        p[a[i]] = i;
    }
    ll sum = 1;
    for (int i = 2; i <=n; i++)
        if (p[i] < p[i-1]) sum++;
    
    while (m--)
    {
        int st, fn; cin >> st >> fn;
        set<int> s;
        // Chỉ thêm các chỉ số hợp lệ
        if (a[st]-1 >= 1) s.insert(a[st]-1);
        s.insert(a[st]);
        if (a[st]+1 >= 1) s.insert(a[st]+1);
        if (a[fn]-1 >= 1) s.insert(a[fn]-1);
        s.insert(a[fn]);
        if (a[fn]+1 >= 1) s.insert(a[fn]+1);
        
        // Trừ đi các trường hợp cũ
        if (s.size() > 1) {
            auto it = s.begin();
            auto prev = it++;
            for (; it != s.end(); ++it, ++prev) {
                if (p[*it] < p[*prev]) sum--;
            }
        }
        swap(a[st], a[fn]);
        swap(p[a[st]], p[a[fn]]);
        // Cộng lại các trường hợp mới
        if (s.size() > 1) {
            auto it = s.begin();
            auto prev = it++;
            for (; it != s.end(); ++it, ++prev) {
                if (p[*it] < p[*prev]) sum++;
            }
        }
        cout << sum << "\n";
        
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}