#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;
	cin>>t;
	ll mod=1000000007;
	ll size=1000006;
	ll arr[size];
	arr[0]=1;
	for(ll i=1;i<=size;i++){
	    arr[i]=(arr[i-1]*2)%mod;
	}
	while(t>0){
	    ll n,k;
	    cin>>n>>k;
	    cout<<k*arr[n-1]%mod<<endl;
	    t--;
	}
	return 0;
}
