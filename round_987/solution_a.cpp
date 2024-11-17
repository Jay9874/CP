#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef long long int ll;

ll larg_multi(ll a, ll b)
{
    ll remain;
    remain = a % b;
    ll multi = (a - remain) / b;
    return multi;
}
bool isWhole(float a)
{
    if (floor(a) == a)
        return true;
    return false;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

/*___________________________________________________________________________________________________________________________________*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int prev, current, maxRepeat = 0, currMax = 1;
        cin >> prev;
        for (int i = 1; i < n; i++)
        {
            cin >> current;
            if (prev == current) currMax++;
            else
            {
                prev = current;
                maxRepeat = max(currMax, maxRepeat);
                currMax = 1;
            }
        }
        maxRepeat = max(currMax, maxRepeat);
        
        cout << n - maxRepeat << "\n";
    }
    return 0;
}