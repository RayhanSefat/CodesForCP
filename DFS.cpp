/*Rabbi Zidni Eilmaa*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = acos(-1.0);
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))
#define  forn(i, n)             fot(int i=1; i<=(int)n; i++)
#define  ANS                    cout << ans << "\n"
#define  PY						cout << "YES\n";
#define  PN						cout << "NO\n";

ll const MOD = 1e9 + 7;

void init()
{

}

int const N = 2e5+5;
vector<int> G[N];
int vis[N];

void dfs(int u){
	if(vis[u])
		return;
	vis[u] = 1;

	for(int v: G[u]){
		dfs(v);
	}
}

void solve()
{


    return;
}

int main()
{
    //freopen("input1.txt", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    init();
    ll t=1;
    cin>>t;
    //getchar();
    for(int i=1; i<=t; i++){
        //cout << "Case " << i << ":\n";
        solve();
    }

    return 0;
}
