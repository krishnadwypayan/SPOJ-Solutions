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


void update(vl &bit, ll index, ll val) {
    for (; index <= bit.size(); index += (index & (-index))) {
        bit[index] += val;
    }
}

ll query(vl &bit, ll index) {
    ll ans = 0;
    for (; index > 0; index -= (index & (-index))) {
        ans += bit[index];
    }
    return ans;
}

void convert(vl &arr) {
    vl newArr = arr;
    sort(all(newArr));
    rep(i, 0, arr.size()) {
        arr[i] = lower_bound(all(newArr), arr[i]) - newArr.begin() + 1;
    }
}

ll getInvCount(vl &arr, int n) {
    vl bit(n+1, 0);
    ll invCount = 0;
    
    // Convert the array into indexes of the array sorted
    convert(arr);
    
    rrep(i, n-1, -1) {
        // Count the number of values seen less than the current value
        invCount += query(bit, arr[i]-1);
        // Update the bit[] for all values greater than the current value
        update(bit, arr[i], 1);
    }

    return invCount;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vl arr(n);
        rep(i, 0, n) cin >> arr[i];
        cout << getInvCount(arr, n) << endl;
    }

    return 0;
}