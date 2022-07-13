#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      int x,y;
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      for(int i=0;i<n;i++){
          if(v[i]==1) 
            x=i;
          if(v[i]==n)
            y=i;
      }
      if(x<y)
       cout<<(n-1-y)+x<<"\n";
      else
       cout<<(n-1-y)+x-1<<"\n";
  }
  return 0;
}
