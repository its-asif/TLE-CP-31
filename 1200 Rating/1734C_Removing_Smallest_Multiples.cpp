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
	    string s; cin >> s;

	    for (int i = 0; i < n; ++i)
	    {
	    	if(s[i] != '1'){
		    	int ind = i + 1, x = i;

	    		if(s[i] == '0'){
		    		sum += ind;
		    		s[x] = '2';
	    		}
	    		
	    		while( x+ind < n  and  s[x+ind] != '1'){
	    			x += ind;
	    			if(s[x] == '0'){
	    				sum += ind;
						s[x] = '2';
					}
	    		}

	    	}
	    }

	    cout << sum << endl;
	}
	return 0;
}