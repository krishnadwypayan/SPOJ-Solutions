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

ll solve(vl arr, ll n, ll x) {
    ll sum = 0;
    rrep(i, n-1, -1) {
        if (sum >= x) return n-i-1;
        sum += arr[i];
    }
    if (sum >= x) return n;
    return -1;
}

int main() {
    int t;
    cin >> t;
    rep(t_i, 1, t+1) {
        ll x, n;
        cin >> x >> n;
        vl arr(n);
        rep(i, 0, n) cin >> arr[i];
        sort(all(arr));
        ll ans = solve(arr, n, x);
        if (ans == -1) cout << "Scenario #" << t_i << ":\nimpossible" << endl;
        else cout << "Scenario #" << t_i << ":\n" << ans << endl;
    }
    
    return 0;
}