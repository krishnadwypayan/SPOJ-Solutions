// Hare Rama Hare Rama, Rama Rama Hare Hare,
// Hare Krishna Hare Krishna, Krishna Krishna Hare Hare.

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, x, n) for (int i = int(x); i < int(n); i++)
#define rrep(i, x, n) for (int i = int(x); i > int(n); i--)
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(a) a.begin(), a.end()
#define sz(a) int((a).size())
#define pb push_back
#define MOD 1000000007

void solve(vl arr, ll n) {
    vl ans(n);
    rep(i, 0, n) {
        ans[arr[i]-1] = i+1;
    }
    if (ans == arr) cout << "ambiguous" << endl;
    else cout << "not ambiguous" << endl;
}

int main() {
    ll n;
    while (true) {
        cin >> n;
        if (!n) break;
        vl arr(n);
        rep(i, 0, n) cin >> arr[i];
        solve(arr, n);
    }
    
    return 0;
}