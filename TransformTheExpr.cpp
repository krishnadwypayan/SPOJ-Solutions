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


int main() {
    int t;
    cin >> t;
    while (t--) {
        string expr;
        cin >> expr;
        stack<char> st;
        string rpn = "";
        rep(i, 0, expr.length()) {
            if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^') {
                st.push(expr[i]);
            } else if (expr[i] == ')') {
                char top = st.top();
                rpn += top;
                st.pop();
            } else if (expr[i] == '(') continue;
            else rpn += expr[i];
        }
        cout << rpn << endl;
    }
    
    return 0;
}