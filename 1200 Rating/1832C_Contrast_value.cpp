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
	    int arr[n];
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> arr[i];
	    }

	    int sign = 0, toggle = 0;

	    for (int i = 1; i < n; ++i)
	    {
	    	if( arr[i-1] > arr[i] and sign != -1){
	    		sign = -1;
	    		toggle++;
	    	}
	    	else if(arr[i-1] < arr[i] and sign != 1){
	    		sign = 1;
	    		toggle++;
	    	}
	    }

	    cout << toggle+1 << endl;

	}
	return 0;
}