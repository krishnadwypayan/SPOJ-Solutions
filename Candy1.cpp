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
    while (true) {
        ll n;
        cin >> n;
        if (n == -1) break;
        vl arr(n);
        ll sum = 0;
        rep(i, 0, n) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum%n) cout << "-1" << endl;
        else {
            ll x = sum/n, moves = 0;
            rep(i, 0, n) if (arr[i] < x) moves += (x-arr[i]);
            cout << moves << endl;
        }
    }
    
    return 0;
}