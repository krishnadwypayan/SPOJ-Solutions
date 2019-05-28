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
        int i = 1, j = 1, k = 1;
        while (k < n) {
            // (i == 1) ==> move right one step
            j++, k++;
            if (k == n) break;

            // Move downwards diagonally until j = 1
            while (j > 1 && k < n) j--, i++, k++;
            if (k == n) break;

            // (j == 1) ==> Move down one step
            i++, k++;
            if (k == n) break;

            // Move upwards diagonally until i = 1
            while (i > 1 && k < n) i--, j++, k++;
        }

        cout << "TERM " << n << " IS " << i << "/" << j << endl;
    }
    
    return 0;
}