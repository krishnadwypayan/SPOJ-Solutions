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


void check(int x, int y) {
    if (x == y) {
        if (x%2) cout << 2*(x-1) + 1 << endl;
        else cout << 2*x << endl;
    } else if (x == y+2 && x >= 2) {
        if (x%2) cout << 2*(x-1)-1 << endl;
        else cout << 2*(x-1) << endl;
    } else cout << "No Number" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        check(x, y);
    }
    
    return 0;
}