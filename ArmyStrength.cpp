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
    cout << endl;
    while (t--) {
        int ng, nm;
        cin >> ng >> nm;
        int a = INT32_MIN, b = INT32_MIN, input;
        rep(i, 0, ng) {
            cin >> input;
            a = max(input, a);
        }
        rep(i, 0, nm) {
            cin >> input;
            b = max(input, b);
        }

        if (a >= b) cout << "Godzilla" << endl;
        else cout << "MechaGodzilla" << endl;
    }
    
    return 0;
}