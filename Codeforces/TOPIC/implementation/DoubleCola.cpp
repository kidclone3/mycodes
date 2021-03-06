// https://codeforces.com/problemset/problem/82/A
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
#define FOR(i, a) for (int i = 0; i < (a); ++i) 
#define FOR1(i, a) for (int i = 1; i < (a+1); ++i) 
#define F0R(i, a, b) for (int i=(a); i < (b); ++i)
#define F_OR(i, a, b, step) for (int i=(a); (step)>0? i<(b) : i>(b); i+=(step))
#define EACH(x, a) for(auto& x: a)
template <class T>
#define IO                                  \
    {                                       \
        freopen("input.txt", "r", stdin);   \
        freopen("output.txt", "w", stdout); \
    }
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // IO;
    solve();
}
void solve() {
    int n;
    cin >> n;
    vector<string> ans = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int j = 0;
    // n -= 5 * (1 << i);
    int ii = 0;
    while( n - (5 * (1 << ii)) > 0) {
        n -= (5 * (1 << ii++));
    }
    // i++;
    while(n > (1<<ii)) {
        n-= (1 << ii);
        j++;
    }
    cout << ans[j];
}