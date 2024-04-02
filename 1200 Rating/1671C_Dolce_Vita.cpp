#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

#define llx ll x; cin>>x;
#define lln ll n; cin>>n;

#define fi(n) for(ll i=0; i<n; i++)
#define fj(n) for(ll j=0; j<n; j++)
#define fa(n) for(auto i:n)
#define fa2(n) for(auto i:n) cout<<i<<' ';
#define llt ll t; cin>>t; while(t--)

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define pbx ll xx; cin>> xx; v.pb(xx);
#define pbs string xx; cin>> xx; v.pb(xx);
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define rsortall(x) sort(all(x),greater<ll>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define C(x) cout<< x <<endl;
#define F i.first
#define S i.second

using namespace std;

int main()
{
    fast
    llt{
        ll n,x; cin>>n>>x;
        vll v,v2;
        fi(n){pbx;}   
        sortall(v);

        ll temp= n,day=0,day2 = 0,cnt=0;
        v2.pb(0);
        for (int i = 1; i <= n; ++i)
        {
            v2.pb(v[i-1]+v2[i-1]);
            if(v2[i]>x){
                temp= i-1;
                break;
            }
        }

       if(temp==0){
        cout<<0<<endl;
        continue;
       }

        cnt+=temp;
        
       for (int i = temp; i >0; i--)
       {

            v2[i] += (day*i);
            day += (x-v2[i])/i;
            cnt += i*(day-day2);
            day2=day;
       }
        
        cout<<cnt<<endl;
    }
    
    return 0;
}