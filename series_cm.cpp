#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<stack>
#include<list>
#include<queue>
#include<set>
#include<string>
#include<string.h>
#include <sstream>
#include<map>

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization("unroll-loops")

#define ll long long
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
using namespace std;

const int MOD = 1000000007;
const int Nmax=1000005;

ll gcd(ll a,ll b)
{
    if(a==0){
        return b;
    }

    return gcd(b%a,a);
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

bool isPrime(ll n){
  for(int i = 2; i <=sqrt(n); i++)
    if(n % i == 0)
      return 0;
  return 1;
}

void binaryRepresentation(int x)
{
    for (int i = 31; i >= 0; i--)
    {
        if (x&(1<<i)) cout << "1";
        else cout << "0";
    }
}

int combination(int n,int r){
    if(r==n || r==0){
        return 1;
    }

    return combination(n-1,r-1) + combination(n-1,r);
}

bool isPowerOfTwo(ll n)
{
   if(n==0)
        return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

ll power(ll a,ll b)
{
  ll ans=1;
  while(b)
  {
    if(b&1)
      ans=(ans*a);
    b/=2;
    a=(a*a);
  }
  return ans;
}

ll inverse(ll i)
{
    if(i==1) return 1;
    return (MOD-((MOD/i)*inverse(MOD%i))%MOD+MOD)%MOD;
}

bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

string toString(ll a)
{
    ostringstream temp;
    temp << a;
    return temp.str();
}

int main()
{
    //vector<vector<int> >ar(n,vector<int> (m,0));
    //vector<int>::iterator ptr;

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll t;
    cin>>t;
    ll j=1;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>ar(n);
        for(ll i=0;i<n;i++)
            cin>>ar[i];

        map<ll,ll>diff;
        for(ll i=0;i<n-1;i++)
        {
            diff[ar[i+1]-ar[i]]++;
        }

        if(diff.size()<=1)
        {
            cout<<"0\n";
            continue;
        }
        ll c=-1;
        for(ll i=0;i<n-1;i++)
        {
            if(ar[i+1]>=ar[i])
            {
                //cout<<"c ar : "<<ar[i]<<"\n";
               c=ar[i+1]-ar[i];
               break;
            }
        }

        if(c==-1)
        {
            cout<<"-1\n";
            continue;
        }

        ll m=-1;
        for(ll i=0;i<n-1;i++)
        {
            if(ar[i+1]<=ar[i])
            {
                //cout<<"m ar : "<<ar[i]<<"\n";
                m=c+ar[i]-ar[i+1];
                break;
            }
        }

        if(m==-1)
        {
            cout<<"-1\n";
            continue;
        }

        if(c>=m || ar[0]>=m)
        {
            cout<<"-1\n";
            continue;
        }

        vector<ll>br(n,0);
        br[0]=ar[0];
        for(ll i=1;i<n;i++)
        {
            br[i]=(br[i-1]+c)%m;
        }

        //cout<<" c : "<<c<<" m : "<<m<<"\n";
        //for(ll i=0;i<n;i++)
        //    cout<<br[i]<<"  ";
        //cout<<"\n";

        if(ar!=br)
        {
            cout<<"-1\n";
            continue;
        }

        cout<<m<<" "<<c<<"\n";
    }
    return 0;
}