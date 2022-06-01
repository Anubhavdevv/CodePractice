#include <iostream>
using namespace std;

int main() {

	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y&&abs(x-y)%2==0) 
        cout<<abs(x-y)/2<<endl;
	    else if(x>y&&abs(x-y)%2!=0) 
        cout<<abs(x-y)/2+2<<endl;
	    else 
        cout<<abs(x-y)<<endl;
	}
	return 0;
}
