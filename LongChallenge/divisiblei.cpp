#include <bits/stdc++.h>
#define int long long
using namespace std;

int main() {
	int t;
  cin>>t;
	while(t--){
	   int n;
     cin>>n;
	   int a[n];
	   a[n-1]=n;
	   a[n-2]=1;
	   set<int>st;
	   for(int i=n-3;i>=0;i--){
	       if(a[i+1]+i+1<n && st.find(a[i+1]+i+1)==st.end()){
	           a[i]=a[i+1]+i+1;
	           st.insert(a[i+1]+i+1);
	       }
	       else a[i]=a[i+1]-i-1,st.insert(a[i+1]-i-1);
	   }
	   for(int i=0;i<n;i++)cout<<a[i]<<" ";
	   cout<<'\n';
	}
	return 0;
}
