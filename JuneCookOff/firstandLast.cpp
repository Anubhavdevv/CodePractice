#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes herein
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    int maxVal=INT_MIN;
	    for(int i=0;i<n-1;i++){
	    maxVal=max(maxVal,v[i]+v[i+1]);     
	    }
	    maxVal=max(maxVal,v[0]+v[n-1]);
	    cout<<maxVal<<"\n";
	}
	return 0;
}
