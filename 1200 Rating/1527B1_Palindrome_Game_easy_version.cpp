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
	    string s; cin >> s;

	    int cnt = 0;
		for(char c : s) 
			if(c == '0') cnt++;
		

		if( !cnt ) cout << "DRAW" << endl;

	    if(cnt % 2 == 0) cout << "BOB" << endl;
	    else if(cnt == 1) cout  << "BOB" << endl;
	    else cout << "ALICE" << endl;
	}
	return 0;
}
