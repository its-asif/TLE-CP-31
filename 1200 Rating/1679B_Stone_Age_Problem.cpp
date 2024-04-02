#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

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
    ll ars,qr,sum=0,temp=-1,tmp2; cin>>ars>>qr;
    vll v(ars);
    fi(ars) {cin>>v[i]; sum+=v[i];}
    // for(auto i:v) cout<<i<<' ';
    set<ll> s;
    while(qr--){
        ll t; cin>>t;
        if(t==1){
            ll pos,x; cin>>pos>>x;
            if(temp==-1){
                sum-=v[pos-1];
                sum+= x;
                v[pos-1]=x;
                cout<<sum<<endl;
            }
            else if(s.find(pos)==s.end()){
                sum -=tmp2;
                sum+= x;
                cout<<sum<<endl;
                v[pos-1]=x;
                s.insert(pos);
            }
            else{
                sum-=v[pos-1];
                sum+= x;
                v[pos-1]=x;
                cout<<sum<<endl;
            }
            
        }
        else{
            ll x; cin>>x;
            sum= ars*x;
            cout<<sum<<endl;
            temp=0;
            s.clear();
            tmp2 = x;
        }
    }
    return 0;
}