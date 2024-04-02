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
	    vector< ll > cost(n), have(n), dif(n);

	    for (int i = 0; i < n; ++i) cin >> cost[i];
    	for (int i = 0; i < n; ++i) cin >> have[i];
		for (int i = 0; i < n; ++i) dif[i] = have[i] - cost[i];

		sort(dif.begin(), dif.end(), greater<ll>());

		int st = 0, en = n-1, cnt = 0;
		while(st<en){
			while( st < en and dif[st] + dif[en] < 0 ){
				en--;
			}
			if(st < en ) cnt++;
			st++; en--;
		}

		cout << cnt << endl;
	}
	return 0;
}