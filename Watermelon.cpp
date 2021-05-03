	#include<bits/stdc++.h>

	using namespace std;

	#define ll int64_t
	#define mod 1e+09


	float r(float var){
	    float value = (int)(var * 100 + .5);
	    return (float)value / 100;
	}

	void solve(){
		ll n; cin >> n;
		(n%2 == 0 && n != 2 )?cout << "YES":cout << "NO";		
	}


	int main(){
			
		solve();
		// ll t; cin >> t;
		// while(t--) solve();
		return 0;
	}

