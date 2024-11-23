#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef long long int ll;
ll larg_multi(ll a, ll b) {
    ll remain;
    remain = a % b;
    ll multi = (a - remain) / b;
    return multi;
}
bool isWhole(float a){
    if (floor(a) == a) return true;
    return false;
}
ll gcd(ll a, ll b){
    if (b > a) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a % b);
}
/*___________________________________________________________________________________________________________________________________*/


// int getValue(int index){
//     return 0;
// }

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >>t;
    while (t--){
        int x, m;
        cin>>x>>m;
        int count = 0;
        for(int i=1;i<=m;i++){
            if((x != i) and ((x%(x^i) == 0) ||  (i%(x^i) == 0))){
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}
