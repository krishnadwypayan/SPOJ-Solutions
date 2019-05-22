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

void solve(string n) {
    vl dp(n.length()+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    rep(i, 2, n.length()+1) {
        if (n[i-1] != '0') dp[i] = dp[i-1];
        int x = (n[i-2] - '0')*10 + (n[i-1]-'0');
        if (x >= 10 && x <= 26) dp[i] += dp[i-2];
    }
    cout << dp[n.length()] << endl;
}

int main() {
    while (true) {
        string n;
        cin >> n;
        if (n == "0") break;
        solve(n);
    }
    
    return 0;
}