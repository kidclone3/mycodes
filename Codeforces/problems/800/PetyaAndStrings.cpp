#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
#define FOR(i, a) for (int i = 0; i < (a); ++i) 
#define F0R(i, a, b) for (int i=(a); i < (b); ++i)
#define F_OR(i, a, b, step) for (int i=(a); (step)>0? i<(b) : i>(b); i+=(step))
#define EACH(x, a) for(auto& x: a)
#define BUG(x)                    \
    {                             \
        cout << #x << " = " << x; \
    }
template <class T>
void print(T &x)
{
    for (auto &it : x)
    {
        cout << it << " ";
    }
    cout << "\n";
};
void inputIO() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve();
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // inputIO;
    solve();
}
void solve() {
   string a, b;
   cin >> a >> b;
   EACH(it, a) {
       if (it>='a') {
           it -= 'a' - 'A';
       }
   } 
   EACH(it, b) {
       if (it>='a') {
           it -= 'a' - 'A';
       }
   } 
   if (a==b) {
       cout << 0;
   }
   else if (a < b) {
       cout << -1;
   }
   else {
       cout << 1;
   }
}