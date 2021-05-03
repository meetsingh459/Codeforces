#include<bits/stdc++.h>
 
using namespace std;
 
#define ll int64_t
#define mod 1e+09
 
 
float r(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
 
void solve(){
	int n, k; cin >> n >> k;
	int arr[n]; 
	for(int i = 0; i < n; i++) cin >> arr[i];
	int res = 0;
	for(int i = 0; i < n; i++) if( arr[i] > 0 && arr[i] >= arr[k-1]) res++;
	cout << res;
	
}
 
 
int main(){
		
	solve();
	return 0;
}