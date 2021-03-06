#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
#define FORIT(i, s) for (auto it=(s.begin()); it!=(s.end()); ++it)
#define F_OR(i, a, b, s) for (int i=(a); (s)>0? i<(b) : i>(b); i+=(s))
#define F_OR1(n) F_OR(i, 0, n, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define FOR1(n) F_OR(i, 1, n+1, 1)
#define EACH(x, a) for(auto& x: a)
#define IO                                  \
    {                                       \
        freopen("input.txt", "r", stdin);   \
        freopen("output.txt", "w", stdout); \
    }
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
template <class T>
void print(T &x)
{
    for (auto &it : x)
    {
        cout << it << " ";
    }
    cout << "\n";
};
void solve();
int main()
{
    IOS;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    FOR(n) {
        cin >> a[i];
    }
    sort(all(a));
    ll ans=0;
    FOR(i, n-1) {
        if (2 * a[i] > r) break;
        auto it1 = lower_bound(a.begin() + i + 1, a.end(), l-a[i]);
        if(it1 == a.end()) continue;
        auto it2 = upper_bound(a.begin() + i + 1, a.end(), r-a[i]);
        if (it2 == a.end() || *it2 > r-a[i]) it2--;
        ans += (it2 - it1 + 1);
    }
    cout << ans << "\n";
}
