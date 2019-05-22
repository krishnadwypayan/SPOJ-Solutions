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

ll solve(vl arr, ll n, ll c) {
    // Lower bound for the ans = low
    // Upper bound for the ans = high
    ll ans = 0, low = arr[0], high = arr[n-1];
    while (low <= high) {
        // Greedily select mid as the minimum distance
        // and place cows when distance between arr[i] and prev cow placed >= mid
        // Count the number of cows placed with mid as minimum distance
        // If number of cows placed >= c ==> update ans and search in [mid+1, high]
        // Else, search in [low, mid-1]
        ll mid = (low + high)/2, temp = 1, cowPlaced = arr[0];
        rep(i, 1, n) {
            if (arr[i] - cowPlaced >= mid) {
                cowPlaced = arr[i];
                temp++;
            }
        }
        if (temp >= c) {
            ans = mid;
            low = mid+1;
        } else high = mid-1;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
        vl arr(n);
        rep(i, 0, n) cin >> arr[i];
        sort(all(arr));
        cout << solve(arr, n, c) << endl;
    }
    
    return 0;
}