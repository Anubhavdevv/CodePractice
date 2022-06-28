#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    string str = "";
	    for(int i=0;i<n;i++){
	        if(s[i]=='A')
	         str.push_back('T');
	        if(s[i]=='T')
	         str.push_back('A');
	        if(s[i]=='C')
	         str.push_back('G');
	        if(s[i]=='G')
	         str.push_back('C');
	    }
	    cout << str << endl;
	}
	return 0;
}
