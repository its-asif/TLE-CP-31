#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, k, cnt = 0; cin >> n >> k;
	    vector< ll > v(n);
	    std::map<ll, ll> mp;

	    for (int i = 0; i < n; ++i)
	    {
	    	ll x; cin >> x;
	    	x %= k;
	    	mp[x]++;
	    }

	    for(auto i : mp){
	    	ll a = i.first;
	    	ll b = k - a;

	    	if( a == 0 or a == b){
	    		cnt++;
	    		mp[a] = 0;
	    		continue;
	    	}

	    	if( mp.find(b) == mp.end()) continue;

	    	ll mn = min(mp[a], mp[b]);

	    	if(mn > 0) cnt++;
	    	else continue;


	    	if(mp[a] > mn ) mp[a] -= (mn+1);
	    	else mp[a] -= mn;

	    	if(mp[b] > mn) mp[b] -= (mn+1);
	    	else mp[b] -= mn;
	    }

	    for(auto i : mp)
	    	cnt += i.second;


	    cout << cnt << endl;

	}
	return 0;
}