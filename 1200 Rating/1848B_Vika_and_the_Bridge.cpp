#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, k; cin >> n >> k;
	    vector<int> v(n), mxDis(k+1, 0), mx2Dis(k+1, 0), prev(k+1, -1);

	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> v[i];

	    	int dis = i - prev[ v[i] ] - 1;
	    	if(mxDis[v[i]] <= dis){
	    		mx2Dis[v[i]] = mxDis[v[i]];
	    		mxDis[v[i]] = max(mxDis[v[i]], dis);
	    	}
	    	else{
	    		mx2Dis[v[i]] = max(mx2Dis[v[i]], dis);
	    	}
	    	prev[ v[i] ] = i;
	    }

	    for (int i = 0; i <= k; ++i)
	    {
	    	int dis = n - prev[ i ] - 1;
	    	if(mxDis[i] <= dis){
	    		mx2Dis[i] = mxDis[i];
	    		mxDis[i] = max(mxDis[i], dis);
	    	}
	    	else{
	    		mx2Dis[i] = max(mx2Dis[i], dis);
	    	}
	    }

	    int mn = INT_MAX;

	    for (int i = 1; i <= k; ++i)
	    	mn = min ( mn , max(mxDis[i] / 2, mx2Dis[i]));

	    cout << mn << endl;
	}
	return 0;
}