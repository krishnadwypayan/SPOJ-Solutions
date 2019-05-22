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


void factorial(ll n) {
    vector<ll> ans;
    ans.push_back(1);
    rep(i, 2, n+1) {
        int carry = 0;
        rep(j, 0, ans.size()) {
            ll val = ans[j]*i + carry;
            ans[j] = val % 10;
            carry = val/10;
        }
        while (carry) {
            ans.push_back(carry%10);
            carry /= 10;
        }
    }
    rrep(i, ans.size()-1, -1) cout << ans[i];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        factorial(n);
        cout << endl;
    }
    
    return 0;
}