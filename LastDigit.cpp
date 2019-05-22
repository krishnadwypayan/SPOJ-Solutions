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


ll power(ll x, ll y) {
    ll res = 1;
    x = x % 10;
    while (y > 0) {
        if (y & 1) res = (res * x) % 10;
        y /= 2;
        x = (x * x) % 10;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        cout << power(x, y) << endl;
    }
    
    return 0;
}