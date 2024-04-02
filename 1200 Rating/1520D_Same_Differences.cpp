#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, sum = 0; cin >> n;
	    map<ll, ll> mp;

	    for (int i = 1; i <= n; ++i)
	    {
	    	ll x; cin >> x;
	    	ll dif = x - i;
	    	mp[dif]++;
	    }

	    for(auto i : mp){
	    	ll x = i.second;
	    	sum += ( x * (x-1) ) / 2;
	    }

	    cout << sum << endl;
	}
	return 0;
}