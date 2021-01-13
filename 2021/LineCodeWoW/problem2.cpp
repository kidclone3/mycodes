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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair <ll, ll>> vt;
    F_OR(i, 0, n, 1) {
        ll a, b;
        cin >> a >> b;
        vt.pb({b,a}); // Cho dia chi nha len truoc so nha do de sort.
    }
    sort(all(vt));
    ll inp;
    while (cin >> inp) {
        auto j = lower_bound(all(vt), make_pair(inp, (ll)-1));
        if (j==vt.end()) {
            --j;
            cout<<j->second<<"\n";
            continue;
        }
        if (j==vt.begin()) {
            cout<<j->second<<'\n';
            continue;
        }
        auto jj = j--;
        if (abs(j->first - inp) > abs(jj->first - inp)) {
            cout<<jj->second<<"\n";
        }        
        else if (abs(j->first - inp) < abs(jj->first - inp)) {
            cout << j->second<<"\n";
        }
        else {
            cout<<min(j->second, jj->second)<<'\n';
        }
    }
}