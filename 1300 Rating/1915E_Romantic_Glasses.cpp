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
	    vector<ll> v(n+1), pref(n+1);
	    set<ll> st;
	    bool hobeNaki = false;
	    pref[0] = 0;

	    for (int i = 1; i <= n; ++i)
	    {
	    	cin >> v[i];
	    	if(i % 2) pref[i] = pref[i-1] + v[i];
	    	else pref[i] = pref[i-1] - v[i];

	    	
	    }

	    for (int i = 1; i <= n; ++i)
	    {
	    	if(st.find(pref[i]) != st.end() or pref[i] == 0){
	    		hobeNaki = true;
	    		break;
	    	}
	    	else  st.insert(pref[i]);
	    }

	    if(hobeNaki) cout <<"YES" << endl;
	    else cout << "NO" << endl;


	}
	return 0;
}