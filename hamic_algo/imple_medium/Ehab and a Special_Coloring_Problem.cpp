// https://codeforces.com/problemset/problem/1174/C
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

const int N = 1e5+5;
vector<int> prime;
void gen(int n) {
    vector<bool> a(n+5);
    a[0] = a[1] = 1;
    for (int i = 2; i*i <= n; ++i) {
        if (a[i]) continue;
        for (int j = i+i; j <= n; j+=i) {
            a[j] = 1;
        }
    }
    FOR(n+1) {
        if (!a[i]) prime.push_back(i);
    }
}

void solve();

int main()
{
    IOS;
    solve();
}
void solve() {
    int n;
    cin >> n; 
    gen(n);
    vector<int> ans(n+2, 0);
    int j = 1;
    EACH(it, prime) {
        for (int i = it; i <= n; i+=it) {
            ans[i] = j;
        }
        j++;
    }
    FOR(i, 2, n+1) {
        cout << ans[i] << " ";
    }
}
