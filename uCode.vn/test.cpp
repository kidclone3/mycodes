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
    vector<int> arr = {1,5,2,4,3};
    // print(arr);
    // sort(arr.begin(), arr.end());
    // sort(all(arr));
    F_OR(i, 0, arr.size(), 1) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for (auto it:arr) {
        cout<<it<<" ";
    }
    cout<<"\n";
    print(arr);
}