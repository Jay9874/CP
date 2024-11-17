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
    map<int, int> mp;
    mp.insert({1, num});
    for (int i = 2; i <= num; i++)
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
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int itm;
            cin >> itm;
            v.pb(itm);
            if (mp.find(itm) == mp.end())
            {
                mp.insert({itm, i});
            }
            else
                mp[itm]++;
        }
        map<int, int> multipliers = findDivisors(totalElements);
        for (auto it : multipliers)
        for (int i = 0; i < k; i++)
        {
            int firstDivisor = v[i];
            if (multipliers.find(v[i]) != multipliers.end())
            {
                auto it = multipliers.find(v[i]);
                int second = it->second;
                if (mp.find(second) != mp.end())
                {
                    if (second == firstDivisor && mp[firstDivisor] >= 2)
                    {
                        cout << v[i] << " " << second << nline;
                        cout<<"hello ";
                    }
                    else if (second != firstDivisor)
                    {
                        cout << v[i] << " " << second << nline;
                        cout<<"Hii ";
                    }
                }
            }
        }
    }
    return 0;
}