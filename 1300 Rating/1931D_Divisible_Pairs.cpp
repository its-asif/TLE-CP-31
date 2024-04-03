#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    int n, x, y; cin >> n >> x >> y;

	    map<int, vector<int>> mp;

	    for (int i = 0; i < n; ++i)
	    {
	    	int temp; cin >> temp;
	    	mp[ temp % y ].push_back( temp % x );
	    }

	    int cnt = 0;
	    for(auto each : mp){
	    	map<int, int> m;

	    	for(auto i : each.second){
	    		int xxx = (x - i) % x;
	    		cnt += m[xxx];
	    		m[i]++;
	    	}
	    }

	    cout << cnt << endl;

	}
	return 0;
}