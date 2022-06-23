#include <iostream>
using namespace std;

int main() {
	int t,n;
	string str;
	cin>>t;
	while(t--){
	    int count=0;
	    cin>>n;
	   cin>>str;
	   int p1=0,p2=n-1;
	   while(p1<=p2){
	       if(str[p1]==')' && str[p2]=='('){
	           count+=2;
	           p1++;
	           p2--;
	       }
	       else if(str[p2]==')' && str[p1]=='('){
	           p1++;
	           p2--;
	       }
	       else if(str[p2]=='(' && str[p1]=='('){
	           p2--;
	           count++;
	       }
	       else if(str[p1]==')' && str[p2]==')'){
	           p1++;
	           count++;
	       }
	   }
	   cout<<count<<endl;
	}
	return 0;
}
