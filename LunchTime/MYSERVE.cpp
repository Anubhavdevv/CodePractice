#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t;
	int sum = 0;
	while(t--){
	    int p, q;
	    cin >> p >> q;
	    sum = p + q;
	    if(sum%4 == 0 || sum%4 == 1)
	      cout << "Alice" << endl;
	    else
	      cout << "Bob" << endl;
	}
	return 0;
}
