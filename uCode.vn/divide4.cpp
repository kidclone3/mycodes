#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
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
ll gcd (ll a, ll b) {
    if (b==0) {
        return a;
    }
    else return gcd (b, a%b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;
    ll gcd_ab = gcd(a, b);
    ll ans = 0;
    if (gcd_ab == 1){
        ans = n/a + n/b;
    }
    else {
        ll lcm_ab = (a*b) / gcd_ab;
        if (lcm_ab > 0) {
            ans = n/a + n/b;
        }
        else {
            ans = n/a + n/b - n/lcm_ab;
        }
    }
    cout << ans;
}