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
	    ll m = (n * (n-1)) / 2;
	    vector<ll> v(m), ans;
	    for (ll i = 0; i < m; ++i) cin >> v[i];

	    sort(v.begin(), v.end());

		ll indx = -1;
		while(--n){
			indx += n;
			ans.push_back(v[indx]);
		}
		ans.push_back(v[indx]);

		for(auto i : ans) cout << i << ' ';
		cout << endl;
	}
	return 0;
}