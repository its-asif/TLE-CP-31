#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, cnt = 0; cin >> n;
	    string a, b; cin >> a >> b;
	    a += '0';
	    b += '0';
	    bool isOK = true;


	    for (int i = 0; i < n; ++i)
	    {

	    	if(a[i] == '1')  cnt += 1;
	    	else cnt -= 1;

	    	if(((a[i] == b[i] and a[i+1] != b[i+1]) or (a[i] != b[i] and a[i+1] == b[i+1])) and cnt != 0){
	    		isOK = false;
	    		break;
	    	}
	    }

	    if(isOK) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}