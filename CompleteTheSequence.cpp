// Hare Rama Hare Rama, Rama Rama Hare Hare,
// Hare Krishna Hare Krishna, Krishna Krishna Hare Hare.

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, x, n) for (int i = int(x); i < int(n); i++)
#define rrep(i, x, n) for (int i = int(n)-1; i >= int(x); i--)
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

void completeSequence(int arr[], int s, int c) {
    if (s == 1) {
        rep(i, 0, c) cout << arr[0] << " ";
        return;
    }

    int dif[s+c][s+c];
    int degree = 0, constant = 0;
    rep(i, 0, s) dif[0][i] = arr[i];
    rep(i, 1, s) {
        rep(j, i, s) {
            dif[i][j] = dif[i-1][j] - dif[i-1][j-1];
        }

        int val = dif[i][i];
        bool checkConstant = true;
        rep(j, i+1, s) if (dif[i][j] != val) checkConstant = false;
        if (checkConstant) {
            degree = i;
            constant = val;
            break;
        }
    }

    rep(i, s, s+c) dif[degree][i] = constant;

    for (int i = degree; i >= 1; i--) {
        rep(j, s, s+c) {
            dif[i-1][j] = dif[i][j] + dif[i-1][j-1];
        }
    }

    rep(i, 0, c) cout << dif[0][s+i] << " ";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, c;
        cin >> s >> c;
        int arr[s];
        rep(i, 0, s) cin >> arr[i];
        completeSequence(arr, s, c);
        cout << endl;
    }
    
    return 0;
}