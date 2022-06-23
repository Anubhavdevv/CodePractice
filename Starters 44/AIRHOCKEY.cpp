#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    int sum = 0;
	    int sus = 0;
	    sum = abs(a-7);
	    sus = abs(b-7);
	    int mine = min(sum, sus);
	    cout << mine << endl;
	}
	return 0;
}
