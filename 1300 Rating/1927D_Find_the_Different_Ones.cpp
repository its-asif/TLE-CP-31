#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    int n; cin >> n;
	    vector<int> v(n+1), pref(n+1);
	    pref[0] = -1;
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> v[i];
	    	if(i > 0){
	    		if(v[i] == v[i-1]) pref[i] = pref[i-1];
	    		else pref[i] = i-1;
	    	}
	    }

	    int m; cin >> m;
	    for (int i = 0; i < m; ++i)
	    {
	    	int x,y; cin >> x >> y;
	    	x--; y--;

	    	if(pref[x] == pref[y]){
	    		cout << -1 << ' '<< -1 << endl;
	    	}
	    	else{
	    		cout << pref[y]+1 << ' ' << y+1 << endl;
	    	}

	    }
	}
	return 0;
}