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

void solve(string a, string b, string c) {
    string ma = "machula";
    int find_a = a.find(ma);
    int find_b = b.find(ma);
    int num_a, num_b, num_c;
    if (find_a != string::npos) {
        num_a = stoi(c) - stoi(b);
        cout << num_a << " + " << b << " = " << c << endl;
        return;
    } else if (find_b != string::npos) {
        num_b = stoi(c) - stoi(a);
        cout << a << " + " << num_b << " = " << c << endl;
        return;
    } else {
        num_c = stoi(a) + stoi(b);
        cout << a << " + " << b << " = " << num_c << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c, plus, equal;
        cin >> a >> plus >> b >> equal >> c;
        solve(a, b, c);
    }
    
    return 0;
}