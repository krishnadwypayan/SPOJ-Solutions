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
    int n, m;
    cin >> n >> m;
    map<int, vi> graph;
    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        if (graph.find(u) != graph.end()) graph[u].pb(v);
        else {
            vi arr;
            arr.pb(v);
            graph[u] = arr;
        }
    }

    stack<int> s;
    s.push(1);
    int edges = 0;
    while (!s.empty()) {
        int top = s.top();
        s.pop();
        rep(i, 0, graph[top].size()) {
            s.push(graph[top][i]);
            edges++;
        }
        if (edges > n-1) break;
    }
    
    if (edges != n-1 || m != n-1) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}