#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define ll long long
#define pii pair<int, int>
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
    while(t--) solve();
}
void solve() {
    ll x, y;
    cin >> x >> y;
    ll c[10];
    FOR(i, 1, 7) cin >> c[i];
    ll n[10];
    n[1] = min(c[1], c[6] + c[2]);
    n[2] = min(c[2], c[1] + c[3]);
    n[3] = min(c[3], c[2] + c[4]);
    n[4] = min(c[4], c[3] + c[5]);
    n[5] = min(c[5], c[4] + c[6]);
    n[6] = min(c[6], c[5] + c[1]);
    ll ans = 0;
    if (x >= 0 && y >= 0) {
        ll d = min(x, y);
        ans += d*n[1];
        x -= d;
        y -= d;
        if (x > 0) ans += x * n[6];
        if (y > 0) ans += y * n[2];
    }
    else if (x <= 0 && y <= 0) {
        x = -x;
        y = -y;
        ll d = min(x, y);
        ans += d*n[4];
        x -= d;
        y -= d;
        if (x > 0) ans += x * n[3];
        if (y > 0) ans += y * n[5]; 
    }
    else if (x >= 0 && y <= 0) {
        y = -y;
        ans += x * n[6] + y * n[5];
    }
    else if (x <= 0 && y >= 0){
        x = -x;
        ans += x * n[3] + y * n[2];
    }
    cout << ans << '\n';
}
