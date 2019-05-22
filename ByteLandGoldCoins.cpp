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

map<int, ll> dp;

ll rec(ll n) {
    if (n < 12) return n;
    if (dp.find(n) != dp.end()) return dp[n];
    dp[n] = max(n, rec(n/2)+rec(n/3)+rec(n/4));
    return dp[n];
}

int main() {
    rep(i, 0, 10) {
        ll n;
        cin >> n;
        cout << rec(n) << endl;
    }
    
    return 0;
}