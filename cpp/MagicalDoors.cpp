// Magical Doors
// Input Format
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single string S, representing the doors as given in the problem.
// Output Format
// For each test case, print a single line containing one integer denoting the minimum number of times the magic wand needs to be used.

// Constraints
// 1≤T≤105
// 1≤|S|≤105
// Sum of |S| over all test cases ≤2⋅106
// Sample Input 1 
// 3
// 111
// 010
// 10011
// Sample Output 1 
// 0
// 3
// 2


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fst first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MOD = 1000000007;
const int MX = 100001;
void init()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
}
void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void solve()
{
    string x;
    cin >> x;
    map<char, int> cnt;
    
    cnt[x[0]]++;

    FOR(i, 1, x.size())
    {
        if(x[i] != x[i-1])
            cnt[x[i]]++;
    }

    if(x[0] == '0')
        cout << cnt['0'] + cnt['1'];
    else
        cout << cnt['0'] + cnt['1'] - 1;

    cout << '\n';
}
int main()
{
    fastIO();
    init();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
