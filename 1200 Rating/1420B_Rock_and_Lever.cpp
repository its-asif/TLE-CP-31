#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"


int main(){
	fast
	testcase{
	    ll n; cin >> n;
	    vector<int> v(n);
	    map<ll, ll> mp;
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> v[i];
	    	string str = bitset<30>(v[i]).to_string();
	    	for (int i = 0; i < 30; ++i)
	    	{
	    		if(str[i] == '1') {
	    			mp[i]++;
	    			break;
	    		}
	    	}
	    }

	    ll sum = 0;
	    for(auto i : mp){
	    	ll x = i.second;
	    	sum += ( x * (x-1) ) / 2;
	    }

	    cout << sum << endl;
	}
	return 0;
}