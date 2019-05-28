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

vi dfs(map<int, vi> graph, int src, int n) {
    vi ans(n+1), visited(n+1, 0);
    int u, depth = 0;
    stack<int> s1, s2;
    s1.push(src);
    visited[src] = 1;
    while (!s1.empty()) {
        depth++;
        while (!s1.empty()) {
            u = s1.top();
            s1.pop();
            rep(i, 0, graph[u].size()) {
                if (!visited[graph[u][i]]) {
                    s2.push(graph[u][i]);
                    ans[graph[u][i]] = depth;
                    visited[graph[u][i]] = 1;
                }
            }
        }
        s1 = s2;
        while (!s2.empty()) s2.pop();
    }
    return ans;
}

int main() {
    int n, u, v;
    cin >> n;
    map<int, vi> graph;
    rep(i, 0, n-1) {
        cin >> u >> v;
        if (graph.find(u) != graph.end()) graph[u].pb(v);
        else graph[u] = vi(1, v);
        if (graph.find(v) != graph.end()) graph[v].pb(u);
        else graph[v] = vi(1, u);
    }

    vi dp1, dp2;
    // First dfs from vrtx 1 to find the node at max distance from vrtx 1
    dp1 = dfs(graph, 1, n);
    int maxx = max_element(all(dp1)) - dp1.begin();
    // Second dfs from the node found with max distance from vrtx 1 to find the ans
    dp2 = dfs(graph, maxx, n);
    cout << *max_element(all(dp2)) << endl;

    return 0;
}