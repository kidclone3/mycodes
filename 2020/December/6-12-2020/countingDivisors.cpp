#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()
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
// Day la thuat ngu si :))
int a[100000+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // lap 1 ham tinh so uoc cua phan tu ai
    int n;
    cin>>n;
    int M=0;
    for (int i=0; i<n; ++i) {
        cin>>a[i];
    }
    // cout<<prime.size();
    // Vi tat ca cac th deu bi tle, nen ta se tinh ra kqua t
    for (int i=0; i<n; ++i) {
        cout<<res[a[i]-1]<<"\n";
    }
}