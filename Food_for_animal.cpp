/*---ॐ हरे कृष्णा ॐ---*/

#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define umap unordered_map
#define uset unordered_set
#define mk make_pair
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define PHI 1.618033988749895 // Golden Ratio
#define PSI -0.618033988749895 // Conjugate of Golden Ratio
#define read(type) readInt<type>()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
using namespace std;

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if (x>a)x-=a;
        else x=0;
        if (y>=b)y-=b ;
        else y=0;

        if (x+y>c) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}


    int main()
    {

        solve();
        return 0;
    }

