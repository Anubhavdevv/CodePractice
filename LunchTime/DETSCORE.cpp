#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int div = 0;
	int mul = 0;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    div = n/10;
	    mul = div * x;
	    cout << mul << endl;
	}
	return 0;
}
