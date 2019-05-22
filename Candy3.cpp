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


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll sum = 0;
        ll n;
        cin >> n;
        ll a;
        rep(i, 0, n) {
            cin >> a;
            sum = (sum + a) % n;
        }
        if (sum % n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}