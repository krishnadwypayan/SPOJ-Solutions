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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vl men(n), women(n);
        rep(i, 0, n) cin >> men[i];
        rep(i, 0, n) cin >> women[i];
        sort(all(men));
        sort(all(women));
        ll sum = 0;
        rep(i, 0, n) sum += men[i]*women[i];
        cout << sum << endl;
    }
    
    return 0;
}