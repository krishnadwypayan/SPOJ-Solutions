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

vl add(vl x, vl y) {
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    vl ans;
    ll len = min(x.size(), y.size());
    int carry = 0;
    rep(i, 0, len) {
        ll val = x[i] + y[i] + carry;
        carry = val/10;
        ans.pb(val%10);
    }

    if (x.size() > len) {
        rep(i, len, x.size()) {
            ll val = x[i] + carry;
            carry = val/10;
            ans.pb(val%10);
        }
    }

    if (y.size() > len) {
        rep(i, len, y.size()) {
            ll val = y[i] + carry;
            carry = val/10;
            ans.pb(val%10);
        }
    }

    while (carry) {
        ans.pb(carry%10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

vl sub(vl x, vl y) {
    // x > y
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    vl ans;
    ll len = min(x.size(), y.size());
    rep(i, 0, len) {
        if (x[i] < y[i]) {
            x[i+1]--;
            ans.pb(10+x[i]-y[i]);
        } else ans.pb(x[i]-y[i]);
    }

    if (x.size() > len) {
        rep(i, len, x.size()) ans.pb(x[i]);
    }

    reverse(ans.begin(), ans.end());
    vl arr;
    int i = 0;
    while (ans[i] == 0) i++;
    for (; i < ans.size(); i++) arr.pb(ans[i]);
    return arr;
}

vl divBy2(vl x) {
    vl ans;
    ll val = 0;
    rep(i, 0, x.size()) {
        if (val) {
            val = val*10 + x[i];
            ans.pb(val/2);
            val = val % 2;
        }
        else {
            if (x[i] < 2) {
                val += x[i];
                ans.pb(0);
            } else {
                val = x[i]%2;
                ans.pb(x[i]/2);
            }
        }
    }

    vl arr;
    int i = 0;
    while (ans[i] == 0) i++;
    for (; i < ans.size(); i++) arr.pb(ans[i]);
    return arr;
}

int main() {
    rep(t, 0, 10) {
        string x_s, y_s;
        cin >> x_s >> y_s;
        vl x, y, sum, div, diff;
        rep(i, 0, x_s.length()) x.push_back(x_s[i]-'0');
        rep(i, 0, y_s.length()) y.push_back(y_s[i]-'0');
        sum = add(x, y);
        // rep(i, 0, sum.size()) cout << sum[i];
        // cout << endl;
        div = divBy2(sum);
        rep(i, 0, div.size()) cout << div[i];
        cout << endl;
        diff = sub(x, div);
        rep(i, 0, diff.size()) cout << diff[i];
        cout << endl;
    }
    return 0;
}