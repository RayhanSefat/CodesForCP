/*Rabbi Zidni Eilmaa*/
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef string str;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpl;
typedef set<ll> sll;
typedef map<ll,ll> mll;
typedef pair<int,int> pint;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
#define debug(x) cout<<#x<<" "<<x<<endl;
#define loop for(int i=1; i<=n; i++)
#define all(a) (a).begin(), (a).end()
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define forn(i, n) for(int i=1; i<=(int)n; i++)
#define ANS cout << ans << "\n"
#define PY cout << "YES\n"
#define PN cout << "NO\n"

int mod = 1e9 + 7;

void init(){
    
}

const int N = 200005;
int n, m;
vector<pair<int, ll>> g[N];
int parent[N];
int cnt = 0;

int find_parent(int a){
    while (a != parent[a])
    {
        parent[a] = parent[parent[a]];
        a = parent[a];
    }

    return a;
}

void disjoint_union(int a, int b){
    int d = find_parent(a);
    int e = find_parent(b);
    parent[d] = parent[e];
}

ll kruskal(){
    ll res = 0;
    priority_queue<pair<ll, pair<int, int>>> pq;
    for(int u=1; u<=n; u++){
        parent[u] = u;
        for(auto e: g[u]){
            int v = e.first;
            ll w = e.second;
            pq.push({-w, {u, v}});
        }
    }

    while (!pq.empty())
    {
        ll w = -pq.top().first;
        int u = pq.top().second.first;
        int v = pq.top().second.second;
        pq.pop();

        if(find_parent(u) != find_parent(v)){
            res += w;
            disjoint_union(u, v);
            cnt++;
        }
    }
    
    return res;
}

void solve()
{
    

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    init();
    int t = 1;
    // cin >> t;
    for(int i=1; i<=t; i++){
        // cout << "Case " << i << ": ";
        solve();
    }
 
    return 0;
}