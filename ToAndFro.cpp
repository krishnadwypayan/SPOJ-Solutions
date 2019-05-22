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

void solve(string str, int n) {
    int m = str.length()/n;
    for (int i = 1; i < m; i+=2) reverse(str.begin()+(i*n), str.begin()+((i+1)*n));
    string ans = "";
    rep(i, 0, n) {
        rep(j, 0, m) {
            ans += str[i+j*n];
        }
    }
    cout << ans << endl;
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (!n) break;
        string str;
        cin >> str;
        solve(str, n);
    }
    
    return 0;
}