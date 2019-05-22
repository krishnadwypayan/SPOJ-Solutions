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

bool isAll9s(int str[], int n) {
    rep(i, 0, n) if (str[i] != 9) return false;
    return true;
}

void generatePalin(int str[], int n) {
    if (isAll9s(str, n)) {
        // Step 0: check isAll9s ==> output: 10000...001
        string ans = "1";
        rep(i, 0, n-1) ans += "0";
        ans += "1";
        cout << ans << endl;
    } else {
        // Step 1: Start from middle on both left and right 
        // and traverse until left[i] != right[j]
        int i = n/2-1, j = n % 2 ? n/2 + 1 : n/2;
        while (i >= 0 && str[i] == str[j]) {
            i--;
            j++;
        }

        // Find if middle element needs to be incremented
        bool leftSmaller = false;
        if (i < 0 || str[i] < str[j]) leftSmaller = true;
    
        // Copy left to right
        while (i >= 0) str[j++] = str[i--];

        if (leftSmaller) {
            int carry = 1;
            i = n/2 - 1;
            
            // If there are odd digits, increment middle digit
            if (n % 2) {
                str[n/2] += carry;
                carry = str[n/2]/10;
                str[n/2] %= 10;
                j = n/2 + 1;
            } else j = n/2;

            // Add 1 to the rightmost digit of left side and subsequently copy
            // to the right side
            while (i >= 0) {
                str[i] += carry;
                carry = str[i]/10;
                str[i] %= 10;
                str[j++] = str[i--];
            }
        }

        rep(i, 0, n) cout << str[i];
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int num[str.length()];
        rep(i, 0, str.length()) num[i] = str[i] - '0';
        generatePalin(num, str.length());
    }
    
    return 0;
}