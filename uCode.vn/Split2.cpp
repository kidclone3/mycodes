#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b, step) for (int i = (a); (step) > 0 ? i < (b) : i > (b); i += (step))
#define EACH(x, a) for (auto &x : a)
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
int a[100000 + 5];
ll f[100000 + 5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    F_OR(i, 0, n, 1)
    {
        cin >> a[i];
    }
    f[0] = a[0];
    F_OR(i, 1, n, 1)
    {
        f[i] = f[i - 1] + a[i];
    }
    ll ans = 0;
    F_OR(i, 0, n, 1)
    {
        ans = min(f[i], f[n - 1] - f[i]);
    }
    cout << ans;
}