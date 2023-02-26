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

ll const N = 100005;
ll a[N];
ll tree[4*N];

void init(){

}

ll cs = 0;

void build(ll node, ll b, ll e){
    if(b==e){
        tree[node] = a[b];
        return;
    }

    ll left = 2*node;
    ll right = 2*node + 1;
    ll mid = (b+e)/2;
    build(left, b, mid);
    build(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
}

ll query(ll node, ll b, ll e, ll l, ll r){
    if(l>e or r<b)
        return 0;
    if(l<=b and r>=e)
        return tree[node];

    ll left = 2*node;
    ll right = 2*node + 1;
    ll mid = (b+e)/2;

    ll x1 = query(left, b, mid, l, r);
    ll x2 = query(right, mid + 1, e, l, r);

    return x1 + x2;
}

void update(ll node, ll b, ll e, ll i, ll x){
    if(i<b or i>e)
        return;
    if(i==b and i==e){
        tree[node] = x;
        return;
    }

    ll left = 2*node;
    ll right = 2*node + 1;
    ll mid = (b+e)/2;

    update(left, b, mid, i, x);
    update(right, mid+1, e, i, x);
    tree[node] = tree[left] + tree[right];
}

void solve(){
    cs++;
    printf("Case %lld:\n", cs);

    ll n, q; cin >> n >> q;
    loop cin >> a[i];
    build(1, 1, n);

    while(q--){
        ll t; cin >> t;
        if(t==1){
            ll x, v; cin >> x >> v;
            update(1, 1, n, x, v);
        }else{
            ll l, r; cin >> l >> r;
            cout << query(1, 1, n, l, r) << "\n";
        }
    }

    return;
}

int main(){
    //freopen("input1.txt", "r", stdin);

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    init();
    ll t; cin>>t; while(t--)
                        solve();

    return 0;
}
