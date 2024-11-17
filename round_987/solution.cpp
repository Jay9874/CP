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
        return gcd(b, a);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
/*___________________________________________________________________________________________________________________________________*/
map<int, int> findDivisors(int num)
{
    cout << "Received num: " << num << " \n";
    map<int, int> mp;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            mp.insert({i, num / i});
        }
    }
    return mp;
}

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
        int k, row, col;
        cin >> k;
        int totalElements = k - 2;
        bool gotAns = false;
        map<int, bool> mp;
        vector<int> v(k);
        for (auto &it : v)
        {
            int itm;
            cin >> itm;
            if (mp.find(itm) == mp.end())
            {
                mp.insert({itm, true});
                v.pb(itm);
            }
        }
        map<int, int> multipliers = findDivisors(totalElements);
        for (auto it : multipliers)
            cout << "first: " << it.first << " second: " << it.second << nline;
        for (int i = 0; i < k; i++)
        {
            if (multipliers.find(v[i]) != multipliers.end())
            {
                int second = multipliers[i];
                if (mp.find(second) != mp.end())
                {
                    auto index = multipliers.find(v[i]);
                    cout << index->first << " " << second << nline;
                    break;
                }
            }
        }
        return 0;
    }
}